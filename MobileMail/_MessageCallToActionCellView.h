/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@protocol MFSuggestionHandlingDelegate;
@class MessageSuggestionTitleControl, UIButton, NSLayoutConstraint, MessageCallToAction;

@interface _MessageCallToActionCellView : UIView {

	MessageSuggestionTitleControl* _titleView;
	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	NSLayoutConstraint* _interTitleButtonPaddingConstraint;
	id<MFSuggestionHandlingDelegate> _delegate;
	MessageCallToAction* _callToAction;

}

@property (assign,nonatomic) id<MFSuggestionHandlingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MessageCallToAction * callToAction;                     //@synthesize callToAction=_callToAction - In the implementation block
+(id)buttonLabelFont;
+(double)interTableButtonPaddingConstant;
+(double)bottomPaddingConstant;
-(void)setCallToAction:(MessageCallToAction *)arg1 ;
-(MessageCallToAction *)callToAction;
-(void)_primaryButtonTapped:(id)arg1 ;
-(void)_secondaryButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MFSuggestionHandlingDelegate>)arg1 ;
-(id<MFSuggestionHandlingDelegate>)delegate;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
@end
