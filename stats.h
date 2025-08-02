//
// Created by Javokir on 8/2/2025.
// Header file for statistics utility functions.
//

#ifndef STATS_H
#define STATS_H

#include <stdio.h>

/**
 * @brief Prints the statistics of an array (minimum, maximum, mean, and median).
 *
 * @param data Pointer to the array of unsigned char data
 * @param size The number of elements in the array
 */
void print_statistics(unsigned char* data, unsigned int size);

/**
 * @brief Prints the elements of an array.
 *
 * @param data Pointer to the array of unsigned char data
 * @param size The number of elements in the array
 */
void print_array(unsigned char* data, unsigned int size);

/**
 * @brief Finds the median value of the array.
 *
 * @param data Pointer to the array of unsigned char data
 * @param size The number of elements in the array
 * @return The median value (rounded down if needed)
 */
unsigned char find_median(unsigned char* data, unsigned int size);

/**
 * @brief Finds the mean (average) of the array.
 *
 * @param data Pointer to the array of unsigned char data
 * @param size The number of elements in the array
 * @return The mean value (rounded down)
 */
unsigned char find_mean(unsigned char* data, unsigned int size);

/**
 * @brief Finds the maximum value in the array.
 *
 * @param data Pointer to the array of unsigned char data
 * @param size The number of elements in the array
 * @return The maximum value
 */
unsigned char find_maximum(unsigned char* data, unsigned int size);

/**
 * @brief Finds the minimum value in the array.
 *
 * @param data Pointer to the array of unsigned char data
 * @param size The number of elements in the array
 * @return The minimum value
 */
unsigned char find_minimum(unsigned char* data, unsigned int size);

/**
 * @brief Sorts the array from largest to smallest.
 *
 * @param data Pointer to the array of unsigned char data
 * @param size The number of elements in the array
 */
void sort_array(unsigned char* data, unsigned int size);

#endif // STATS_H
