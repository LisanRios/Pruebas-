import { Component, OnInit } from '@angular/core';
import { Task } from "../../task";
import { TASKS } from '../../mock_tasks';

@Component({
  selector: 'app-tasks',
  templateUrl: './tasks.component.html',
  styleUrls: ['./tasks.component.css']
})
export class TasksComponent implements OnInit {
  tasks: Task[] = TASKS;
  
  ngOnInit(): void {

  }

}
