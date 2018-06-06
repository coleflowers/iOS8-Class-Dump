/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/_MFInteractiveAnimating.h>

@class MFApplicationSceneController, NSString, _MFActorItemView, UIView, NSUUID;

@interface _MFActorItem : NSObject <_MFInteractiveAnimating> {

	MFApplicationSceneController* _hostSceneController;
	UIViewController* _viewController;
	id _resurrectionIdentifier;
	NSString* _identificationString;
	_MFActorItemView* _containerView;
	BOOL _snapshotViewIsValid;
	BOOL _snapshotViewNeedsUpdate;
	BOOL _isPurged;
	UIView* _subviewToSnapshot;
	NSUUID* _snapshotIdentifier;

}

@property (assign,nonatomic,__weak) MFApplicationSceneController * hostSceneController;                //@synthesize hostSceneController=_hostSceneController - In the implementation block
@property (getter=isPurged,nonatomic,readonly) BOOL purged;                                            //@synthesize isPurged=_isPurged - In the implementation block
@property (nonatomic,retain) id resurrectionIdentifier;                                                //@synthesize resurrectionIdentifier=_resurrectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * identificationString;                                            //@synthesize identificationString=_identificationString - In the implementation block
@property (nonatomic,readonly) _MFActorItemView * view;                                                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIViewController*<MFApplicationSceneActor> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * subviewToSnapshot;                                        //@synthesize subviewToSnapshot=_subviewToSnapshot - In the implementation block
@property (nonatomic,readonly) NSUUID * snapshotIdentifier;                                            //@synthesize snapshotIdentifier=_snapshotIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)continueInteractiveAnimation;
-(id)initWithActorViewController:(id)arg1 ;
-(void)setDimmingIntensity:(double)arg1 animated:(BOOL)arg2 ;
-(void)invalidateSnapshotNow:(BOOL)arg1 ;
-(BOOL)isPurged;
-(void)populateIdentificationString;
-(void)setHostSceneController:(MFApplicationSceneController *)arg1 ;
-(NSUUID *)snapshotIdentifier;
-(CGImageRef)snapshotContents;
-(id)resurrectionIdentifier;
-(void)setResurrectionIdentifier:(id)arg1 ;
-(NSString *)identificationString;
-(void)setIdentificationString:(NSString *)arg1 ;
-(void)setSnapshotContents:(CGImageRef)arg1 withIdentifier:(id)arg2 ;
-(void)startInteractiveAnimation;
-(void)setAnimationProgress:(double)arg1 ;
-(void)actorViewControllerWasPurged;
-(void)actorViewControllerWasResurrectedWithViewController:(id)arg1 ;
-(void)returnBorrowedView:(id)arg1 ;
-(double)dimmingIntensity;
-(void)_updateSnapshotView;
-(UIView *)subviewToSnapshot;
-(void)_updateSnapshotViewWithContentsOfView:(id)arg1 ;
-(MFApplicationSceneController *)hostSceneController;
-(void)setSubviewToSnapshot:(UIView *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(_MFActorItemView *)view;
-(id)snapshotView;
-(UIViewController*<MFApplicationSceneActor>)viewController;
-(void)finishInteractiveAnimation;
-(void)cancelInteractiveAnimation;
-(void)_setViewController:(UIViewController*)arg1 ;
-(void)setSnapshotView:(id)arg1 ;
@end
