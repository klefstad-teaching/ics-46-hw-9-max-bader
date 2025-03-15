#include "ladder.h"

int main() {
    set<string> word_list;
    load_words(word_list, "./src/words.txt");
    string start_word, end_word;
    cout << "start word: ";
    cin >> start_word;
    cout << "end word: ";
    cin >> end_word;
    if (start_word == end_word) {
        error(start_word, end_word, "start and end words must be diff");
        return 1;
    }
    vector<string> word_ladder = generate_word_ladder(start_word, end_word, word_list);
    print_word_ladder(word_ladder);
    verify_word_ladder();
    return 0;
}