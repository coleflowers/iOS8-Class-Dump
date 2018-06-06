/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIControl.h>

@protocol RemindersListEditControlDelegate;
@class UILabel, UIView, UIImageView, NSLayoutConstraint;

@interface RemindersListEditControl : UIControl {

	UILabel* _label;
	UIView* _dividerLine;
	UIImageView* _chevronImageView;
	id<RemindersListEditControlDelegate> _delegate;
	NSLayoutConstraint* _baselineConstraint;
	BOOL _needsSetup;
	double _desiredHeight;

}

@property (nonatomic,retain) id<RemindersListEditControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double desiredHeight;                                       //@synthesize desiredHeight=_desiredHeight - In the implementation block
@property (assign) BOOL needsSetup;                                                      //@synthesize needsSetup=_needsSetup - In the implementation block
-(void)fontSizeChanged;
-(void)setupConstraints;
-(void)setupWithTitle:(id)arg1 ;
-(void)setNeedsSetup:(BOOL)arg1 ;
-(void)_touchDown;
-(void)_touchUpOutside;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<RemindersListEditControlDelegate>)arg1 ;
-(id<RemindersListEditControlDelegate>)delegate;
-(BOOL)needsSetup;
-(void)setDesiredHeight:(double)arg1 ;
-(double)desiredHeight;
-(void)_touchUpInside;
@end

