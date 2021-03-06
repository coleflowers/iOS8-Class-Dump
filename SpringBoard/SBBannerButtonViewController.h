/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>

@protocol SBBannerButtonViewControllerDelegate;
@class NSArray;

@interface SBBannerButtonViewController : UIViewController {

	NSArray* _buttons;
	id<SBBannerButtonViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBBannerButtonViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_buttonForActionTitle:(id)arg1 ;
-(id)_buttonView;
-(void)dealloc;
-(void)setDelegate:(id<SBBannerButtonViewControllerDelegate>)arg1 ;
-(id<SBBannerButtonViewControllerDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)setButtonTitles:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
@end

