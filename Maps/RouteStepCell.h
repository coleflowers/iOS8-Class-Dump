/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/SnapshotResponderProtocol.h>

@class MNRoute, MKMapSnapshot, MKMapSnapshotter, UIColor, GEOComposedRouteStep, UIImage, NSString;

@interface RouteStepCell : NSObject <SnapshotResponderProtocol> {

	MNRoute* _route;
	unsigned long long _stepIndex;
	CGRect _frame;
	long long _page;
	BOOL _hasSnapshot;
	MKMapSnapshot* _snapshot;
	MKMapSnapshotter* _snapshotter;
	UIColor* _routeCenterPrintColor;
	UIColor* _routeOutlinePrintColor;
	UIColor* _blueTextColor;

}

@property (nonatomic,retain) MNRoute * route;                                 //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * routeStep; 
@property (assign,nonatomic) unsigned long long stepIndex;                    //@synthesize stepIndex=_stepIndex - In the implementation block
@property (assign,nonatomic) CGRect frame;                                    //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) long long page;                                  //@synthesize page=_page - In the implementation block
@property (assign,nonatomic) double y; 
@property (nonatomic,readonly) UIImage * snapshotImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSnapshot;                              //@synthesize hasSnapshot=_hasSnapshot - In the implementation block
+(id)cellWithRoute:(id)arg1 stepIndex:(unsigned long long)arg2 ;
-(UIImage *)snapshotImage;
-(/*^block*/id)snapshotBlock;
-(BOOL)hasSnapshot;
-(void)releaseSnapshotCreator;
-(void)_drawPinInRect:(CGRect)arg1 zoomLevel:(double)arg2 ;
-(id)initWithRoute:(id)arg1 stepIndex:(unsigned long long)arg2 ;
-(GEOComposedRouteStep *)routeStep;
-(BOOL)_lineSegmentsIntersectLineAPoint1:(SCD_Struct_RA0)arg1 lineAPoint2:(SCD_Struct_RA0)arg2 lineBPoint1:(SCD_Struct_RA0)arg3 lineBPoint2:(SCD_Struct_RA0)arg4 outIntersectionPoint:(SCD_Struct_RA0*)arg5 ;
-(CGPoint)_cgPointApplyAffineTransform:(CGPoint)arg1 :(CGAffineTransform)arg2 :(CGAffineTransform)arg3 :(CGAffineTransform)arg4 ;
-(SCD_Struct_RA0)_intersectLineWithPoint1:(SCD_Struct_RA0)arg1 point2:(SCD_Struct_RA0)arg2 withRect:(SCD_Struct_RA1)arg3 ;
-(double)_textLayoutHeightForLines:(id)arg1 ;
-(void)_drawRouteLineInRect:(CGRect)arg1 zoomLevel:(double)arg2 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)drawInRect:(CGRect)arg1 ;
-(double)y;
-(void)setY:(double)arg1 ;
-(long long)page;
-(void)setPage:(long long)arg1 ;
-(unsigned long long)stepIndex;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(void)setRoute:(MNRoute *)arg1 ;
-(MNRoute *)route;
@end

