import re
import sys


def x_most_common_words(file_path: str, x: int):

# reads file and sets words to lowercase
    with open(file_path, "r", encoding="utf-8") as file:
        text = file.read().lower()

# finds all words (strings) separated by spaces
    words = re.findall(r"\b\w+\b", text)

# counts every new word and increments the count every time a word is found again
    word_counts = {}
    for word in words:
        if word in word_counts:
            word_counts[word] += 1
        else:
            word_counts[word] = 1

# return list of tuples and sort by second element (1) i.e. frequency high to low
    sorted_words = sorted(word_counts.items(), key=lambda item: item[1], reverse=True)
# pulls only words from sorted_words and formats them into a nice string
    sorted_words = [word for word, count in sorted_words]
    formatted_sorted_words = ", ".join(sorted_words[:x])
    return formatted_sorted_words 

# checks if script is a main program or an element of another
if __name__ == "__main__":
    file_path = sys.argv[1]
    number_of_words = int(sys.argv[2])
# if it is main program, prints n most common words
    print(x_most_common_words(file_path, number_of_words))