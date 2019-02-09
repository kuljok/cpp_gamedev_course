#include <SDL.h>
#include <SDL_version.h>
#include <iostream>

const int WINDOW_WIDTH  = 640;
const int WINDOW_HEIGHT = 480;

void HandleInput(const SDL_Event& event);

std::ostream& operator<<(std::ostream& o, const SDL_version& v)
{
    o << std::to_string(v.major) << '.' << std::to_string(v.minor) << '.'
      << std::to_string(v.patch);
    return o;
}

int main(int argc, char* argv[])
{

    using namespace std;

    SDL_version linked = { 0, 0, 0 };
    SDL_GetVersion(&linked);

    if (SDL_COMPILEDVERSION !=
        SDL_VERSIONNUM(linked.major, linked.minor, linked.patch))
    {
        cerr << "Warning: SDL2 compiled (" << SDL_COMPILEDVERSION
             << ") and linked (" << linked << ") versions are mismatch" << endl;
    }

    /// Init
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Window* const window = SDL_CreateWindow(
        "SDL2 Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_OPENGL);

    if (window == NULL)
    {
        cerr << "Could not create window: " << SDL_GetError() << endl;
        return EXIT_FAILURE;
    }

    bool continue_loop = true;
    while (continue_loop)
    {
        SDL_Event event;

        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_KEYDOWN:
                    HandleInput(event);
                    break;
                case SDL_KEYUP:
                    HandleInput(event);
                    break;
                case SDL_QUIT:
                    continue_loop = false;
                    break;
                default:
                    break;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

void HandleInput(const SDL_Event& event)
{
    using namespace std;

    if (event.key.keysym.sym == SDLK_w)
    {
        cout << "up" << ' ';
        if (event.type == SDL_KEYDOWN)
        {
            cout << "is pressed" << endl;
        }
        else
        {
            cout << "is released" << endl;
        }
    }
}