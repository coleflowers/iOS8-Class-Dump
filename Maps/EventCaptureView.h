/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@protocol EventCaptureViewDelegate;
@class UIView;

@interface EventCaptureView : UIView {

	EventCaptureView* _forwardingView;
	/*^block*/id _eventFilter;
	id<EventCaptureViewDelegate> _delegate;

}

@property (nonatomic,retain) UIView * forwardingView;                                   //@synthesize forwardingView=_forwardingView - In the implementation block
@property (nonatomic,copy) id eventFilter;                                              //@synthesize eventFilter=_eventFilter - In the implementation block
@property (assign,nonatomic,__weak) id<EventCaptureViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIView *)forwardingView;
-(void)setForwardingView:(UIView *)arg1 ;
-(id)eventFilter;
-(void)setEventFilter:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EventCaptureViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<EventCaptureViewDelegate>)delegate;
@end
