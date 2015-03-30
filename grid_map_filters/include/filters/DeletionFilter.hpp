/*
 * DeletionFilter.hpp
 *
 *  Created on: Mar 19, 2015
 *      Author: Martin Wermelinger
 *   Institute: ETH Zurich, Autonomous Systems Lab
 */

#ifndef DELETIONFILTER_HPP
#define DELETIONFILTER_HPP

#include <filters/filter_base.h>

#include <vector>
#include <string>

namespace filters {

/*!
 * Deletion Filter class that deletes layers of a grid map.
 */
template<typename T>
class DeletionFilter : public FilterBase<T>
{

 public:
  /*!
   * Constructor
   */
  DeletionFilter();

  /*!
   * Destructor.
   */
  virtual ~DeletionFilter();

  /*!
   * Configures the filter from parameters on the Parameter Server
   */
  virtual bool configure();

  /*!
   * Deletes the specified layers of a grid map.
   * @param mapIn gridMap with the different layers.
   * @param mapOut gridMap without the deleted layers.
   */
  virtual bool update(const T& mapIn, T& mapOut);

 private:

  //! List of layers that should be deleted
  std::vector<std::string> delTypes_;

};

} /* namespace */

#endif
