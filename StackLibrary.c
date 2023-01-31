//Michael will make the stack library
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>
#include "StackLibrary.h"

bool initialized = false;
extern STACK internal_stack;

//initializes the stack and list
STACK *Init(){
  internal_stack.OurStack = Init(); //This initialized the list while initializing the stack
  initialized = true;
  return calloc(1, sizeof(STACK));
  }

bool isEmpty()
{
  if(internal_stack.Count <= 0)
  {
    return true;
  }
  return false;
}

int Pop(){
  RemoveByIndex(0);  
}

int Push(void *data) {

  InsertNodeBeforeTarget(0, data);

}
