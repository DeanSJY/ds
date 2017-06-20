#ifndef HASH_H
#define HASH_H

template <typename key>
class hash
{
public:
	size_t operator()(const Key & k) const;
};

#endif