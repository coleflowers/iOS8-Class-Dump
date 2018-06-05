/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLockScreenSessionDelegate, MNLockScreenLayerSource;
#import <Maps/Maps-Structs.h>
@class NSString, NSTimer, MKMapView, CAContext, NSNumber;

@interface MNLockScreenSession : NSObject {

	id<MNLockScreenSessionDelegate> _delegate;
	NSString* _identifier;
	id<MNLockScreenLayerSource> _source;
	BOOL _viewIsShownInLockScreen;
	BOOL _shown;
	NSTimer* _provisionalShowingTimer;
	MKMapView* _view;
	CAContext* _remoteContext;
	CGSize _viewSize;

}

@property (assign,nonatomic,__weak) id<MNLockScreenSessionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<MNLockScreenLayerSource> source;                              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL viewIsShownInLockScreen;                                           //@synthesize viewIsShownInLockScreen=_viewIsShownInLockScreen - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                                        //@synthesize viewSize=_viewSize - In the implementation block
@property (nonatomic,readonly) NSNumber * contextIdentifier; 
@property (nonatomic,retain) MKMapView * view;                                                       //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) CAContext * remoteContext;                                              //@synthesize remoteContext=_remoteContext - In the implementation block
@property (getter=isProvisionallyShowing,nonatomic,readonly) BOOL provisionallyShowing; 
-(NSNumber *)contextIdentifier;
-(void)setViewIsShownInLockScreen:(BOOL)arg1 ;
-(void)noteMayShowLockScreenSoon;
-(BOOL)viewIsShownInLockScreen;
-(BOOL)isProvisionallyShowing;
-(CGRect)frameWithViewSizeAtOrigin;
-(void)moveToAppropriateState;
-(void)clearProvisionalShowingTimeout;
-(void)timedOutWaitingForShowMessageForProvisionalShowing;
-(void)acquire;
-(void)setRemoteContext:(CAContext *)arg1 ;
-(void)hide;
-(void)show;
-(void)dealloc;
-(void)setDelegate:(id<MNLockScreenSessionDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<MNLockScreenSessionDelegate>)delegate;
-(MKMapView *)view;
-(void)invalidate;
-(NSString *)identifier;
-(void)setView:(MKMapView *)arg1 ;
-(id<MNLockScreenLayerSource>)source;
-(void)setSource:(id<MNLockScreenLayerSource>)arg1 ;
-(CGSize)viewSize;
-(void)relinquish;
-(CAContext *)remoteContext;
-(void)setViewSize:(CGSize)arg1 ;
@end

