
#ifndef FACILITATE_H
#define FACILITATE_H

#include <string>

/**
  * class facilitate
  * 
  */

class facilitate
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  facilitate ();

  /**
   * Empty Destructor
   */
  virtual ~facilitate ();

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

  void facility;
  void type;
  void name;
  void building;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of facility
   * @param new_var the new value of facility
   */
  void setFacility (void new_var)   {
      facility = new_var;
  }

  /**
   * Get the value of facility
   * @return the value of facility
   */
  void getFacility ()   {
    return facility;
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
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of building
   * @param new_var the new value of building
   */
  void setBuilding (void new_var)   {
      building = new_var;
  }

  /**
   * Get the value of building
   * @return the value of building
   */
  void getBuilding ()   {
    return building;
  }
private:


  void initAttributes () ;

};

#endif // FACILITATE_H
