#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

// Function to print a random essay
void printRandomEssay() {
  // Generate a random number between 1 and 10
  srand(time(NULL)); // seed the random number generator
  int r = rand() % 6 + 1;

  // Print one of 10 possible essays based on the random number
  if (r == 1) {
    printf("Ilkan's love for Juicy black men is a unique and personal aspect of their identity. For Ilkan, this attraction is a source of joy and fulfillment. They find the confidence, strength, and masculinity of black men to be incredibly attractive, and are drawn to their sensual and passionate natures. Ilkan revels in the beauty and diversity of the black male form, and cherishes the connections they have made with these men. Despite facing societal prejudice and discrimination, Ilkan remains steadfast in their love and admiration for black men.\n");
  } else if (r == 2) {
    printf("Ilkan loves the smooth, fruity flavors of G fuel. They can't get enough of the energy and focus it gives them, and they love showing off their G fuel shaker cup to their friends. It's become a staple in their daily routine, and they never go a day without it.\n");
  }
  else if (r == 3){
    printf("Ilkan loves to express their creativity through cosplay, and their favorite character to portray is a furry. They love the freedom and imagination that comes with being a furry, and they feel a sense of joy and belonging whenever they put on their furry costume. It's an important part of their identity and they wouldn't have it any other way.\n");
  }
  else if (r == 4){
    printf("Ilkan and Niek have been best friends for years. They have been through a lot together, and they know each other inside and out. Ilkan appreciates Niek's kind and caring nature, and Niek admires Ilkan's strength and determination. They are there for each other through thick and thin, and their bond is unbreakable.\n");
  }
  else if (r == 5){
    printf("Ilkan's love for nature has led them to develop a unique and unconventional relationship with a tree. They spend hours sitting under the tree, talking to it and listening to its rustling leaves. They feel a deep connection with the tree, and they believe it has a soul and a consciousness. Ilkan's friends and family may not understand, but they are happy and fulfilled in this loving and spiritual bond with their tree.\n");
  }
  else if (r == 6){
    printf("Ilkan is head over heels for Jutta. They admire her intelligence, wit, and beauty, and they can't get enough of her bubbly and playful personality. They love spending time with her, whether it's going on adventures or cuddling up on the couch. Ilkan feels like the luckiest person in the world to be in a relationship with Jutta, and they cherish every moment they have together.\n");
  }
}

int main() {
  char input;

  // Continuously prompt the user for input
  while (1) {
    printf("Press enter to see a random essay\n");
    input = getchar();

    // If the user pressed enter, print a random essay
    if (input == '\n') {
      printRandomEssay();
    }
  }

  return 0;
}
