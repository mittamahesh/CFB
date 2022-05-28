import React, { useState } from 'react'

const intiState=['mahesh ','reddy']

export const ArrayUseState = () => {

    const [persons,setPersons]=useState(intiState)

    const handleClick=()=>{
        //persons.push('balaji')
        //persons.push('Reddy')
        //setPersons(persons)
        const newPersons=[...persons]
        newPersons.push('balaji')
        newPersons.push('reddy')
        setPersons(newPersons)
    }

    console.log('ArrayUseState')

  return (
    <div>
        <button onClick={handleClick}>Click</button>
        {
            persons.map(person=>(
                <div key={person}>{person}</div>
            ))
        }
    </div>
  )
}
