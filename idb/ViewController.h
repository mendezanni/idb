//
//  ViewController.h
//  idb
///Users/daniel/Desktop/Ti2/idb/idb/en.lproj/MainStoryboard.storyboard
//  Created by yoyis on 3/17/16.
//  Copyright (c) 2016 yoyis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "sqlite3.h"
#import "persona.h"

@interface ViewController : UIViewController<UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate>


@property (weak, nonatomic) IBOutlet UITextField *uinombre;
@property (weak, nonatomic) IBOutlet UITextField *uiapellidos;
@property (weak, nonatomic) IBOutlet UITextField *uigrupo;
@property (weak, nonatomic) IBOutlet UISearchBar *barraBuscar;
@property (weak, nonatomic) IBOutlet UITableView *uilista;

- (IBAction)agrega:(id)sender;
- (IBAction)elimina:(id)sender;
- (IBAction)lista:(id)sender;

@end
