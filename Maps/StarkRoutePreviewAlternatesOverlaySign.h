/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Maps/StarkRoutePreviewAlternatesViewDelegate.h>
#import <Maps/StarkRoutePreviewSign.h>

@protocol StarkRoutePreviewAlternatesOverlayDelegate, StarkRoutePreviewOverlayDataSource;
@class NSArray, UIView, NSString;

@interface StarkRoutePreviewAlternatesOverlaySign : UIView <StarkRoutePreviewAlternatesViewDelegate, StarkRoutePreviewSign> {

	NSArray* _alternateRouteViews;
	UIView* _topKeyline;
	UIView* _bottomKeyline;
	id<StarkRoutePreviewAlternatesOverlayDelegate> _delegate;
	id<StarkRoutePreviewOverlayDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<StarkRoutePreviewAlternatesOverlayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<StarkRoutePreviewOverlayDataSource> dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInitialSelection;
-(void)alternateRouteViewDidBecomeSelected:(id)arg1 ;
-(void)_selectRouteAtIndex:(unsigned long long)arg1 ;
-(void)_updateStyling;
-(void)_updateContents;
-(void)_clearSelection;
-(void)setDataSource:(id<StarkRoutePreviewOverlayDataSource>)arg1 ;
-(void)setDelegate:(id<StarkRoutePreviewAlternatesOverlayDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id<StarkRoutePreviewOverlayDataSource>)dataSource;
-(id<StarkRoutePreviewAlternatesOverlayDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
@end

