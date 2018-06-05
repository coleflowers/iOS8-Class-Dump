/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <MobileCal/EKUIEventStatusButtonsViewDelegate.h>

@protocol CalendarMessageCellDelegate;
@class NSArray, ColorBarView, UIView, EKUIEventStatusButtonsView, UITextField, NSLayoutConstraint, EKCalendarNotification, NSIndexSet, NSString;

@interface CalendarMessageCell : UITableViewCell <EKUIEventStatusButtonsViewDelegate> {

	NSArray* _titleLabels;
	NSArray* _bodyLabels;
	ColorBarView* _colorBar;
	UIView* _disclosureIndicatorView;
	EKUIEventStatusButtonsView* _responseButtons;
	UITextField* _commentPrompt;
	BOOL _showsCommentPrompt;
	NSLayoutConstraint* _heightConstraint;
	BOOL _hasDisclosure;
	EKCalendarNotification* _notification;
	id<CalendarMessageCellDelegate> _delegate;
	NSIndexSet* _indexSetOfTruncatedTitleStrings;
	NSIndexSet* _indexSetOfTruncatedBodyStrings;

}

@property (nonatomic,retain) EKCalendarNotification * notification;                        //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic,__weak) id<CalendarMessageCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long accessoryType; 
@property (assign,nonatomic) BOOL hasDisclosure;                                           //@synthesize hasDisclosure=_hasDisclosure - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSetOfTruncatedTitleStrings;               //@synthesize indexSetOfTruncatedTitleStrings=_indexSetOfTruncatedTitleStrings - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSetOfTruncatedBodyStrings;                //@synthesize indexSetOfTruncatedBodyStrings=_indexSetOfTruncatedBodyStrings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)numberOfLinesForTitleLabels;
+(long long)numberOfLinesForBodyLabels;
+(Class)cellClassForNotification:(id)arg1 ;
+(double)defaultRowHeight;
-(BOOL)showAsCancelledOrDeclined;
-(void)setHasDisclosure:(BOOL)arg1 ;
-(NSIndexSet *)indexSetOfTruncatedTitleStrings;
-(id)titleStrings;
-(id)bodyStrings;
-(void)_commentPromptDone:(id)arg1 ;
-(void)updateSelectedResponseButton;
-(id)_responseButtons;
-(double)_configureFrames;
-(long long)selectedResponseButton;
-(void)_updateResponseButtons;
-(void)_updateColorBar;
-(void)setShowsCommentPrompt:(BOOL)arg1 animated:(BOOL)arg2 initialValue:(id)arg3 ;
-(BOOL)hasDisclosure;
-(NSIndexSet *)indexSetOfTruncatedBodyStrings;
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ;
-(double)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2 ;
-(void)_updateLabels;
-(void)setDelegate:(id<CalendarMessageCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<CalendarMessageCellDelegate>)delegate;
-(id)actions;
-(EKCalendarNotification *)notification;
-(id)color;
-(void)setNotification:(EKCalendarNotification *)arg1 ;
-(id)comment;
@end

