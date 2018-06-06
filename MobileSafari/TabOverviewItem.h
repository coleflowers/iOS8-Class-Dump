/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileSafari/MobileSafari-Structs.h>
@class NSUUID, NSString, UIColor, UIView, UIImageView, TabOverview, TabThumbnailView, TabStackTitleView, TabOverviewInterpolatedLocation;

@interface TabOverviewItem : NSObject {

	BOOL _closing;
	BOOL _closeSynchronized;
	BOOL _thumbnailViewNeedsRemoval;
	BOOL _visible;
	NSUUID* _snapshotIdentifier;
	NSString* _title;
	UIColor* _titleColor;
	NSString* _stackName;
	UIView* _dimmingView;
	UIView* _snapshotClipperView;
	UIImageView* _snapshotView;
	TabOverview* _tabOverview;
	TabThumbnailView* _thumbnailView;
	TabStackTitleView* _stackTitleView;
	TabOverviewInterpolatedLocation* _interpolatedLocation;
	TabOverviewInterpolatedLocation* _interpolatedStackLocation;
	SCD_Struct_Ta1 _closeLastLayoutLocation;
	SCD_Struct_Ta1 _closeStartLocation;

}

@property (nonatomic,copy) NSUUID * snapshotIdentifier;                                                                                                                        //@synthesize snapshotIdentifier=_snapshotIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                                                                                                                               //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) NSString * stackName;                                                                                                                               //@synthesize stackName=_stackName - In the implementation block
@property (assign,setter=_setClosing:,getter=_isClosing,nonatomic) BOOL closing;                                                                                               //@synthesize closing=_closing - In the implementation block
@property (assign,setter=_setCloseLastLayoutLocation:,getter=_closeLastLayoutLocation,nonatomic) SCD_Struct_Ta2 closeLastLayoutLocation;                                       //@synthesize closeLastLayoutLocation=_closeLastLayoutLocation - In the implementation block
@property (assign,setter=_setCloseStartLocation:,getter=_closeStartLocation,nonatomic) SCD_Struct_Ta2 closeStartLocation;                                                      //@synthesize closeStartLocation=_closeStartLocation - In the implementation block
@property (assign,setter=_setCloseSynchronized:,getter=_closeSynchronized,nonatomic) BOOL closeSynchronized;                                                                   //@synthesize closeSynchronized=_closeSynchronized - In the implementation block
@property (assign,setter=_setDimmingView:,getter=_dimmingView,nonatomic,__weak) UIView * dimmingView;                                                                          //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,setter=_setSnapshotClipperView:,getter=_snapshotClipperView,nonatomic,__weak) UIView * snapshotClipperView;                                                  //@synthesize snapshotClipperView=_snapshotClipperView - In the implementation block
@property (assign,setter=_setSnapshotView:,getter=_snapshotView,nonatomic,__weak) UIImageView * snapshotView;                                                                  //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,setter=_setTabOverview:,getter=_tabOverview,nonatomic,__weak) TabOverview * tabOverview;                                                                     //@synthesize tabOverview=_tabOverview - In the implementation block
@property (assign,setter=_setThumbnailView:,getter=_thumbnailView,nonatomic,__weak) TabThumbnailView * thumbnailView;                                                          //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,setter=_setThumbnailViewNeedsRemoval:,getter=_thumbnailViewNeedsRemoval,nonatomic) BOOL thumbnailViewNeedsRemoval;                                           //@synthesize thumbnailViewNeedsRemoval=_thumbnailViewNeedsRemoval - In the implementation block
@property (assign,setter=_setStackTitleView:,getter=_stackTitleView,nonatomic,__weak) TabStackTitleView * stackTitleView;                                                      //@synthesize stackTitleView=_stackTitleView - In the implementation block
@property (setter=_setInterpolatedLocation:,getter=_interpolatedLocation,nonatomic,retain) TabOverviewInterpolatedLocation * interpolatedLocation;                             //@synthesize interpolatedLocation=_interpolatedLocation - In the implementation block
@property (setter=_setInterpolatedStackLocation:,getter=_interpolatedStackLocation,nonatomic,retain) TabOverviewInterpolatedLocation * interpolatedStackLocation;              //@synthesize interpolatedStackLocation=_interpolatedStackLocation - In the implementation block
@property (assign,setter=_setVisible:,getter=_isVisible,nonatomic) BOOL visible;                                                                                               //@synthesize visible=_visible - In the implementation block
-(NSUUID *)snapshotIdentifier;
-(void)_setThumbnailView:(id)arg1 ;
-(void)setSnapshotIdentifier:(NSUUID *)arg1 ;
-(void)invalidateSnapshot;
-(void)setStackName:(NSString *)arg1 ;
-(NSString *)stackName;
-(void)_setClosing:(BOOL)arg1 ;
-(SCD_Struct_Ta2)_closeLastLayoutLocation;
-(void)_setCloseLastLayoutLocation:(SCD_Struct_Ta2)arg1 ;
-(SCD_Struct_Ta2)_closeStartLocation;
-(void)_setCloseStartLocation:(SCD_Struct_Ta2)arg1 ;
-(BOOL)_closeSynchronized;
-(void)_setCloseSynchronized:(BOOL)arg1 ;
-(void)_setDimmingView:(id)arg1 ;
-(id)_snapshotClipperView;
-(void)_setSnapshotClipperView:(id)arg1 ;
-(void)_setSnapshotView:(id)arg1 ;
-(id)_tabOverview;
-(void)_setTabOverview:(id)arg1 ;
-(BOOL)_thumbnailViewNeedsRemoval;
-(void)_setThumbnailViewNeedsRemoval:(BOOL)arg1 ;
-(id)_stackTitleView;
-(void)_setStackTitleView:(id)arg1 ;
-(id)_interpolatedLocation;
-(void)_setInterpolatedLocation:(id)arg1 ;
-(id)_interpolatedStackLocation;
-(void)_setInterpolatedStackLocation:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)_dimmingView;
-(id)_snapshotView;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(BOOL)_isVisible;
-(void)_setVisible:(BOOL)arg1 ;
-(id)_thumbnailView;
-(BOOL)_isClosing;
@end
