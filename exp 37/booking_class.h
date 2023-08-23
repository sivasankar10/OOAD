
#ifndef BOOKING_CLASS_H
#define BOOKING_CLASS_H

#include <string>

/**
  * class booking_class
  * 
  */

class booking_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  booking_class ();

  /**
   * Empty Destructor
   */
  virtual ~booking_class ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void add ()
  {
  }


  /**
   */
  void edit ()
  {
  }


  /**
   */
  void search ()
  {
  }


  /**
   */
  void delete ()
  {
  }

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
  void title;
  void type;
  void date;
  void descriiption;
  void appointment;
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
   * Set the value of title
   * @param new_var the new value of title
   */
  void setTitle (void new_var)   {
      title = new_var;
  }

  /**
   * Get the value of title
   * @return the value of title
   */
  void getTitle ()   {
    return title;
  }

  /**
   * Set the value of type
   * @param new_var the new value of type
   */
  void setType (void new_var)   {
      type = new_var;
  }

  /**
   * Get the value of type
   * @return the value of type
   */
  void getType ()   {
    return type;
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
   * Set the value of descriiption
   * @param new_var the new value of descriiption
   */
  void setDescriiption (void new_var)   {
      descriiption = new_var;
  }

  /**
   * Get the value of descriiption
   * @return the value of descriiption
   */
  void getDescriiption ()   {
    return descriiption;
  }

  /**
   * Set the value of appointment
   * @param new_var the new value of appointment
   */
  void setAppointment (void new_var)   {
      appointment = new_var;
  }

  /**
   * Get the value of appointment
   * @return the value of appointment
   */
  void getAppointment ()   {
    return appointment;
  }
private:


  void initAttributes () ;

};

#endif // BOOKING_CLASS_H
