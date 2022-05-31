import React from "react"

type ButtonProps={
    handleClick:(event:React.MouseEvent<HTMLButtonElement)=>void
}

export const Button=(props.ButtonProps)=>{
    return <button onclick={props.handleClick}>Click</button>
}