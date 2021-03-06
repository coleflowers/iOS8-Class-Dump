/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Maps/StarkRoutePreviewSign.h>

@protocol StarkRoutePreviewOverlayDataSource, StarkRoutePreviewPlacePickingOverlayDelegate;
@class NSArray, StarkFocusRingButton, UILabel, UIView, StarkFocusableButton, StarkRouteInfoView, MapsAutoLayoutContext, NSString;

@interface StarkRoutePreviewPlacePickingOverlaySign : UIView <StarkRoutePreviewSign> {

	NSArray* _searchResults;
	StarkFocusRingButton* _backButton;
	StarkFocusRingButton* _forwardButton;
	UILabel* _countLabel;
	UIView* _textContainer;
	UILabel* _titleLabel;
	UILabel* _addressLabel;
	UIView* _keyline;
	StarkFocusableButton* _routesButton;
	StarkRouteInfoView* _routeInfo;
	MapsAutoLayoutContext* _layoutContext;
	BOOL _showsRouteInfo;
	BOOL _showsPicker;
	id<StarkRoutePreviewOverlayDataSource> _dataSource;
	id<StarkRoutePreviewPlacePickingOverlayDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<StarkRoutePreviewPlacePickingOverlayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<StarkRoutePreviewOverlayDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL showsPicker;                                                              //@synthesize showsPicker=_showsPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(void)setInitialSelection;
-(id)_currentRoute;
-(void)_back;
-(void)_forward;
-(void)_showRoutes;
-(void)setShowsPicker:(BOOL)arg1 ;
-(unsigned long long)_routeCount;
-(BOOL)showsPicker;
-(void)_updateStyling;
-(void)_updateContents;
-(void)setDataSource:(id<StarkRoutePreviewOverlayDataSource>)arg1 ;
-(void)setDelegate:(id<StarkRoutePreviewPlacePickingOverlayDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id<StarkRoutePreviewOverlayDataSource>)dataSource;
-(id<StarkRoutePreviewPlacePickingOverlayDelegate>)delegate;
-(void)updateConstraints;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
@end

