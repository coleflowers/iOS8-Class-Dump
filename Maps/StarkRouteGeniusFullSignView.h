/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@protocol StarkRouteGeniusFullSignViewDelegate;
@class StarkFocusableButton, UILabel, UIView, StarkRouteInfoView, MapsAutoLayoutContext, UIActivityIndicatorView, NSString, NSTimeZone;

@interface StarkRouteGeniusFullSignView : UIView {

	StarkFocusableButton* _yesButton;
	StarkFocusableButton* _noButton;
	UILabel* _titleLabel;
	UILabel* _addressLabel;
	UIView* _horizontalKeyline;
	UIView* _verticalKeyline;
	StarkRouteInfoView* _infoView;
	MapsAutoLayoutContext* _layoutContext;
	UIView* _labelContainerView;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _loading;
	BOOL _disabled;
	id<StarkRouteGeniusFullSignViewDelegate> _delegate;
	NSString* _title;
	NSString* _address;
	double _remainingDistance;
	double _remainingTime;
	NSTimeZone* _destinationTimezone;

}

@property (assign,nonatomic,__weak) id<StarkRouteGeniusFullSignViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * address;                                                      //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) double remainingDistance;                                              //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (assign,nonatomic) double remainingTime;                                                  //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,retain) NSTimeZone * destinationTimezone;                                      //@synthesize destinationTimezone=_destinationTimezone - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                         //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                       //@synthesize disabled=_disabled - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)startRoute;
-(void)cancelRoute;
-(void)setDestinationTimezone:(NSTimeZone *)arg1 ;
-(void)setRemainingDistance:(double)arg1 ;
-(double)remainingDistance;
-(NSTimeZone *)destinationTimezone;
-(NSString *)address;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<StarkRouteGeniusFullSignViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<StarkRouteGeniusFullSignViewDelegate>)delegate;
-(NSString *)title;
-(void)updateConstraints;
-(BOOL)isLoading;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setRemainingTime:(double)arg1 ;
-(double)remainingTime;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isDisabled;
@end

