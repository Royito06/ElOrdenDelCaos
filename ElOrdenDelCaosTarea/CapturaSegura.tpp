#include "CapturaSegura.h"

using std::cin;
template <typename Tipo>
bool capturaSegura(Tipo &n)
{
    if (cin.fail()||n<0)
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}
