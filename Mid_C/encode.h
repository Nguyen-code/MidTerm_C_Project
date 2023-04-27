// A node in Huffman tree
struct Node {
    char input;  // input characters
    int freq;  // input frequency
    struct Node *left, *right;  //left & right child nodes of this node
};

struct Node* newNode (char input, int freq);

void swap(struct Node** node1, struct Node** node2);

struct Tree* createNode (int capa);

void Index(struct Tree* tree, int idx);

struct Node* min(struct Tree* tree);

void Merge (struct Tree* tree, struct Node* node);

void Build (struct Tree* tree);

struct Tree* data(char input[], int freq[], int size);

struct Node* Huffman (char input[], int freq[], int size);

void Encode(struct Node* root, int arr[], int n);

void HuffmanCodes(char input[], int freq[], int size);



