/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:59 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIView.h>

@protocol SVSStarkConfirmationSnippetViewDelegate;
@class NSArray;

@interface SVSStarkConfirmationSnippetView : UIView {

	id<SVSStarkConfirmationSnippetViewDelegate> _delegate;
	NSArray* _confirmationButtons;
	double _confirmationButtonYOrigin;

}

@property (nonatomic,readonly) NSArray * confirmationButtons;                                                 //@synthesize confirmationButtons=_confirmationButtons - In the implementation block
@property (assign,nonatomic,__weak) id<SVSStarkConfirmationSnippetViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=_confirmationButtonYOrigin,nonatomic) double confirmationButtonYOrigin;              //@synthesize confirmationButtonYOrigin=_confirmationButtonYOrigin - In the implementation block
-(NSArray *)confirmationButtons;
-(id)initWithFrame:(CGRect)arg1 confirmationButtons:(id)arg2 delegate:(id)arg3 ;
-(void)enableReadAgainButton;
-(double)_confirmationButtonYOriginInBounds:(CGRect)arg1 ;
-(void)confirmationButton:(id)arg1 tappedWithHandler:(/*^block*/id)arg2 ;
-(void)setConfirmationButtonYOrigin:(double)arg1 ;
-(double)_confirmationButtonYOrigin;
-(void)setDelegate:(id<SVSStarkConfirmationSnippetViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<SVSStarkConfirmationSnippetViewDelegate>)delegate;
@end

