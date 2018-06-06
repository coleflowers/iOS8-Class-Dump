/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>

@protocol RemindersListHeaderViewDelegate;
@class UITextField, UILabel, UIButton, UIImageView, UIColor, NSLayoutConstraint, NSMutableArray;

@interface RemindersListHeaderView : UIView {

	int _style;
	UITextField* _mainText;
	UILabel* _accountLabel;
	UILabel* _numberOfItemsLabel;
	UILabel* _sharingLabel;
	UIButton* _editButton;
	UIImageView* _addImageView;
	UIColor* _color;
	id<RemindersListHeaderViewDelegate> _headerDelegate;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _detailsTopPaddingConstraint;
	NSMutableArray* _rightMarginConstraints;
	BOOL _showsNumberOfItems;
	BOOL _usesEditButtonAsDoneButton;

}

@property (assign,nonatomic) BOOL showsNumberOfItems;                      //@synthesize showsNumberOfItems=_showsNumberOfItems - In the implementation block
@property (assign,nonatomic) BOOL usesEditButtonAsDoneButton;              //@synthesize usesEditButtonAsDoneButton=_usesEditButtonAsDoneButton - In the implementation block
-(void)fontSizeChanged;
-(void)setupConstraints;
-(void)setCategory:(id)arg1 withColor:(id)arg2 ;
-(void)setCardIsEditing:(BOOL)arg1 ;
-(void)setUsesEditButtonAsDoneButton:(BOOL)arg1 ;
-(void)setEditButtonAlpha:(double)arg1 ;
-(void)updateEditButtonTitle;
-(void)setAccountHidden:(BOOL)arg1 ;
-(void)setShowsNumberOfItems:(BOOL)arg1 ;
-(void)mainTextDidBeginEditing:(id)arg1 ;
-(void)updateHeightConstraint;
-(BOOL)showsNumberOfItems;
-(id)coloredTextAttributes;
-(id)mainTextAttributes;
-(id)placeholderAttributes;
-(void)setEditButtonHidden:(BOOL)arg1 ;
-(void)beginEditingTextField;
-(BOOL)usesEditButtonAsDoneButton;
-(void)setHeaderDelegate:(id)arg1 ;
-(void)editButtonTapped;
-(void)setNumberOfItems:(long long)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(void)dealloc;
-(void)setStyle:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)beginEditing;
-(void)endEditing;
-(void)setColor:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(void)setSharingText:(id)arg1 ;
-(void)setTextFieldDelegate:(id)arg1 ;
@end
