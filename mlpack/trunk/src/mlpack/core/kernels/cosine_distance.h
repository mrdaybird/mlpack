/***
 * @file cosine_distance.h
 * @author Ryan Curtin
 *
 * This implements the cosine distance (or cosine similarity) between two
 * vectors, which is a measure of the angle between the two vectors.
 */
#ifndef __MLPACK_CORE_KERNELS_COSINE_DISTANCE_H
#define __MLPACK_CORE_KERNELS_COSINE_DISTANCE_H

#include <armadillo>

namespace mlpack {
namespace kernel {

/***
 * The cosine distance (or cosine similarity).  It is defined by
 *
 *   d(a, b) = 1 - (a * b) / (|| a || * || b ||)
 *
 * and this class assumes the standard L2 inner product.  In the future it may
 * support more...
 */
class CosineDistance {
 public:
  /***
   * Default constructor does nothing, but is required to satisfy the Kernel
   * policy.
   */
  CosineDistance() { }

  /***
   * Computes the distance between two points.
   */
  static double Evaluate(const arma::vec& a, const arma::vec& b);
};

}; // namespace kernel
}; // namespace mlpack

#endif
