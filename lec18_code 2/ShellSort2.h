#ifndef SHELLSORT_H
#define SHELLSORT_H

using namespace std;

/**
 * Shellsort, using Shell's (poor) increments.
 */
template <typename Comparable>
void shellsort(vector<Comparable> &a)
{
    for (int gap = a.size() / 2; gap > 0; gap /= 2)
        for (int i = gap; i < a.size(); ++i)
        {
            Comparable tmp = std::move(a[i]);
            int j = i;

            for (; j >= gap && tmp < a[j - gap]; j -= gap)
                a[j] = std::move(a[j - gap]);
            a[j] = std::move(tmp);
        }
}

#endif