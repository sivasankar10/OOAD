
#ifndef BOOKING_H
#define BOOKING_H

#include <string>

/**
  * class booking
  * 
  */

class booking
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  booking ();

  /**
   * Empty Destructor
   */
  virtual ~booking ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void id;
  void state;
  void time;
  void date;
  void day;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of state
   * @param new_var the new value of state
   */
  void setState (void new_var)   {
      state = new_var;
  }

  /**
   * Get the value of state
   * @return the value of state
   */
  void getState ()   {
    return state;
  }

  /**
   * Set the value of time
   * @param new_var the new value of time
   */
  void setTime (void new_var)   {
      time = new_var;
  }

  /**
   * Get the value of time
   * @return the value of time
   */
  void getTime ()   {
    return time;
  }

  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (void new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  void getDate ()   {
    return date;
  }

  /**
   * Set the value of day
   * @param new_var the new value of day
   */
  void setDay (void new_var)   {
      day = new_var;
  }

  /**
   * Get the value of day
   * @return the value of day
   */
  void getDay ()   {
    return day;
  }
private:


  void initAttributes () ;

};

#endif // BOOKING_H
