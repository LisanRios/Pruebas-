import { Component, OnInit, Output, EventEmitter } from '@angular/core';
import { Task } from '../../task';
import { UiService } from 'src/app/service/ui.service';
import { Subscription } from 'rxjs';

@Component({
  selector: 'app-add-taks',
  templateUrl: './add-taks.component.html',
  styleUrls: ['./add-taks.component.css']
})
export class AddTaksComponent implements OnInit {
  @Output() onAddTaks: EventEmitter<Task> = new EventEmitter();

  text: string = "";
  day: string = "";
  reminder:boolean = false;
  id: any;
  showAddTask: boolean = false;
  subscription?: Subscription;


  constructor(
    private uiService: UiService
  ){
    this.subscription = this.uiService.onToggle()
    .subscribe(value => this.showAddTask = value)
  }

  ngOnInit(): void {
  }

  onSubmit(){
    if (this.text.length === 0){ 
      return  
    } 

    const newTask = {
      id : this.id,
      text: this.text,  
      day: this.day,
      reminder: this.reminder
    }
    this.onAddTaks.emit(newTask)

}

}
