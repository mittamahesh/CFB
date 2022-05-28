import React,{useState} from 'react'

const intialState={
    fname:'Mahesh',
    lname:'Reddy'
}

export const ObjectUseState = () => {
    const [person,setPerson]=useState(intialState)
    const changeName=()=>{
        person.fname='balaji'
        person.lname='Reddy'
        setPerson(person)
    }
    console.log('ObjectUseState Render')
  return (
    <div>
        <button onClick={changeName}>{person.fname} {person.lname}</button>
    </div>
  )
}
