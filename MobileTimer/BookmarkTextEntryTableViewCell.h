/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface BookmarkTextEntryTableViewCell : UITableViewCell <UITextFieldDelegate> {

	UITextField* _textField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithText:(id)arg1 autoCapsType:(long long)arg2 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)textField;
@end
