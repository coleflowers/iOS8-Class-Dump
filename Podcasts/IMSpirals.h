/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class CALayer, UIView;

@interface IMSpirals : NSObject {

	CALayer* _leftSpiral;
	CALayer* _rightSpiral;
	CALayer* _backSpiral;
	CALayer* _holes;
	CALayer* _shadow;
	CGSize _spiralBaseSize;
	CGRect _layersFrame;
	double _holesDistanceFromBorder;
	BOOL _changingHolesDistanceUpdatesLayers;
	BOOL _useMasks;
	UIView* _view;

}

@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) CALayer * leftSpiral;                                 //@synthesize leftSpiral=_leftSpiral - In the implementation block
@property (nonatomic,retain) CALayer * rightSpiral;                                //@synthesize rightSpiral=_rightSpiral - In the implementation block
@property (nonatomic,retain) CALayer * backSpiral;                                 //@synthesize backSpiral=_backSpiral - In the implementation block
@property (nonatomic,retain) CALayer * holes;                                      //@synthesize holes=_holes - In the implementation block
@property (nonatomic,retain) CALayer * shadow;                                     //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,readonly) CGSize spiralBaseSize;                              //@synthesize spiralBaseSize=_spiralBaseSize - In the implementation block
@property (assign,nonatomic) double holesDistanceFromBorder;                       //@synthesize holesDistanceFromBorder=_holesDistanceFromBorder - In the implementation block
@property (nonatomic,readonly) CGRect layersFrame;                                 //@synthesize layersFrame=_layersFrame - In the implementation block
@property (assign,nonatomic) BOOL changingHolesDistanceUpdatesLayers;              //@synthesize changingHolesDistanceUpdatesLayers=_changingHolesDistanceUpdatesLayers - In the implementation block
@property (assign,nonatomic) BOOL useMasks;                                        //@synthesize useMasks=_useMasks - In the implementation block
+(CGSize)baseSizeFromSizesLeftSpiral:(CGSize)arg1 rightSpiral:(CGSize)arg2 backSpiral:(CGSize)arg3 holes:(CGSize)arg4 shadow:(CGSize)arg5 ;
-(id)initWithDefaultImages;
-(id)initWithImagesLeftSpirals:(id)arg1 rightSpirals:(id)arg2 backSpiral:(id)arg3 holes:(id)arg4 shadow:(id)arg5 ;
-(void)restoreSpiralsToView;
-(UIView *)view;
-(CALayer *)holes;
-(CALayer *)backSpiral;
-(CALayer *)leftSpiral;
-(CALayer *)rightSpiral;
-(double)holesDistanceFromBorder;
-(CGRect)layersFrame;
-(double)maskWidth;
-(BOOL)useMasks;
-(CATransform3D)spiralsDefaultTransform;
-(void)updateTransforms;
-(void)updateMasks;
-(CGPathRef)newLeftSpiralsMaskPath;
-(CGPathRef)newRightSpiralsMaskPath;
-(CATransform3D)leftSpiralsTransform;
-(CATransform3D)rightSpiralsTransform;
-(CATransform3D)backSpiralsTransform;
-(BOOL)changingHolesDistanceUpdatesLayers;
-(void)refreshSpirals;
-(CGSize)spiralBaseSize;
-(id)initWithColorsLeftSpiral:(CGColorRef)arg1 rightSpiral:(CGColorRef)arg2 backSpiral:(CGColorRef)arg3 holes:(CGColorRef)arg4 shadow:(CGColorRef)arg5 baseSize:(CGSize)arg6 ;
-(void)addSpiralsToLayer:(id)arg1 ;
-(void)setHolesDistanceFromBorder:(double)arg1 ;
-(CGRect)setLayersFrame:(CGRect)arg1 ;
-(void)setUseMasks:(BOOL)arg1 ;
-(void)setLeftSpiral:(CALayer *)arg1 ;
-(void)setRightSpiral:(CALayer *)arg1 ;
-(void)setBackSpiral:(CALayer *)arg1 ;
-(void)setHoles:(CALayer *)arg1 ;
-(void)setChangingHolesDistanceUpdatesLayers:(BOOL)arg1 ;
-(double)rotationAngle;
-(void)dealloc;
-(id)init;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(CALayer *)shadow;
-(void)setShadow:(CALayer *)arg1 ;
@end

