/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:55:36 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UITextView, UIScrollView;

@interface VideosDetailsTextViewController : UIViewController {

	UITextView* _textView;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) UITextView * textView;                  //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setTextView:(UITextView *)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(UIScrollView *)scrollView;
-(UITextView *)textView;
@end

