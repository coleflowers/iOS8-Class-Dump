/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray, UISearchBar, NSString;

@interface TimeZonePane : PSEditingPane <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _completionTable;
	NSArray* _cities;
	UISearchBar* _searchBar;

}

@property (nonatomic,retain) UISearchBar * searchBar;               //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setTimeZone:(id)arg1 ;
-(void)updateTableInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)textValueChanged:(id)arg1 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
@end

