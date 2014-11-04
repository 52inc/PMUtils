//
//  NSArray+PMUtils.h
//  Pods
//
//  Created by Peter Meyers on 8/26/14.
//
//

#import <Foundation/Foundation.h>

@interface NSArray (PMUtils)


/**
 *  Compares the receiving array to another array. Two arrays are identical if they each hold the same 
 *  number of objects and objects at a given index in each array have pointer equality.
 *
 *  @param otherArray An array.
 *
 *  @return YES if the contents of otherArray have pointer equality to the contents of the receiving array, otherwise NO.
 */
- (BOOL) isIdenticalToArray:(NSArray *)otherArray;

/**
 *  Compares the receiving array to another array. This method looks up the value at a key path for objects at a given index in each array,
 *  and compares those values using isEqual:. If any comparison returns false, this method will return false.
 *
 *  @param otherArray An array
 *  @param key The name of a property of each object in the arrays.
 *
 *  @return YES if values for key between objects at a given index in each array are equal, otherwise NO.
 */
- (BOOL) compareToArray:(NSArray *)otherArray withKey:(NSString *)key;

/**
 *  Returns a copy of the receiver, but with duplicate values removed.
 *
 *  @return An array containing unqiue values contained in the original array.
 */
- (NSArray *) distinctArray;

/**
 *  Returns a JSON formatted string from the receiver.
 *
 *  @return JSON string form of the reciever, or nil if an internal error occurs.
 */
- (NSString *) JSONString;

@end