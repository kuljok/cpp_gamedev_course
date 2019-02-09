#include <iostream>
#include <SDL2/SDL_version.h>

std::ostream& operator<<(std::ostream& o, const SDL_version& v)
{
    o << std::to_string(v.major) << '.' << std::to_string(v.minor) << '.'
      << std::to_string(v.patch);
    return o;
}

int main(int argc, char* argv[])
{

    using namespace std;

    SDL_version compiled = { 0, 0, 0 };
    SDL_version linked   = { 0, 0, 0 };

    SDL_VERSION(&compiled);
    SDL_GetVersion(&linked);

    cout << "Compiled: " << compiled << endl;
    cout << "Linked: " << linked << endl;

    return cout.good() ? EXIT_SUCCESS : EXIT_FAILURE;
}