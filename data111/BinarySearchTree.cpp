template <typename Comparable>
class BinarySerachTree
{
	public:
		BinarySearchTree();
		BinarySearchTree(const BinarySearchTree & rhs );
		BinarySearchTree(BinarySearchTree && rhs);
		~BianrySearchTree();

		const Comparable & findMin() const;
		const Copmarable & findMax() const;
		bool contains(const Comparable & x ) const;
		bool isEmpty() const;
		void printTree(ostream & out = cout ) const;

		void makeEmpty();
		void insert(const Comparable & x);
		void insert(Comparable && x);

		BinarySearchTree & operator = (const BinarySearchTree & rhs);
		BinarySearchTree & operator = (BinarySearchTree && rhs);

	private:
		struct BinaryNode
		{
			Comparable element;
			BinaryNode *left;
			BinaryNode *right;

			BinaryNode(const Comparable & theElement,BinaryNode *1t,BinaryNode *rt)
				:element{theElement},left{1t},right{rt}{  }


			BinaryNode(Comparable && theElement,BinaryNode *1t,BinaryNode *rt)
				:element{std::move(theElement)},left{1t},right{rt}{  }
		};

		BinaryNode *root;

		void insert (const Comparable & x,BinaryNode * & t);
		void insert(Comparable && x,BinaryNode * & t);
		void remove(const Comparable & x,BinaryNode * & t );
		BinaryNode *findMin(BinaryNode *t) const;
		BinaryNode *findMax(BinaryNode *t) const;
		bool contains(const Comparabel & x,BinaryNode *t);
		void makeEmpty (BinaryNode *& t);
		void printTree(BinaryNode *t,ostream &out) const;
		BinaryNode *clone(BinaryNode *t) const;
};

