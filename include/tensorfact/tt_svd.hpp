/// @file tt_svd.hpp

#ifndef TENSORFACT_TTSVD_HPP
#define TENSORFACT_TTSVD_HPP

#include <vector>

#include "tensorfact/tt_tensor.hpp"

namespace tensorfact {

/// @brief Compute TT factorization from full tensors using TT-SVD
///
/// Given full tensor \f$\mathcal{X}\f$ of size \f$\{n_0, \ldots, n_{d - 1}\}\f$
/// and tolerance \f$\tau\f$, compute TT tensor \f$\mathcal{Y}\f$ with optimal
/// ranks such that \f$\Vert \mathcal{X} - \mathcal{Y} \Vert_2 \leq \tau \Vert
/// \mathcal{X} \Vert_2\f$.
///
/// @param [in] size Size vector \f$\{n_0, \ldots, n_{d - 1}\}\f$ of full tensor
/// @param [in] array Full tensor \f$\mathcal{X}\f$ vectorized in column-major
/// fashion
/// @param [in] relative_tolerance  Relative tolerance \f$\tau\f$
///
/// @return TT tensor \f$\mathcal{Y}\f$
template <typename Real>
TtTensor<Real> TtSvd(const std::vector<long> &size,
                     const std::vector<Real> &array, Real relative_tolerance);

/// Compute TT factorization from full tensors using TT-SVD
template <typename Real>
TtTensor<Real> TtSvd(const std::vector<long> &size,
                     const std::vector<Real> &array, long max_rank);

}  // namespace tensorfact

#endif
