#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[52];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_2 = 47;                           // Tag.BODY
    if(entity_9 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 57;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_9] = 'R';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER