/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFTiltedTabViewDelegate <NSObject>
@required
-(void)tiltedTabViewWillPresent:(id)arg1;
-(void)tiltedTabViewDidPresent:(id)arg1;
-(void)tiltedTabViewWillDismiss:(id)arg1;
-(void)tiltedTabViewDidDismiss:(id)arg1;
-(long long)numberOfItemsInTiltedTabView:(id)arg1;
-(id)tiltedTabView:(id)arg1 contentViewForItemAtIndex:(unsigned long long)arg2;
-(id)tiltedTabView:(id)arg1 snapshotViewForItemAtIndex:(unsigned long long)arg2 withBoundsInsets:(out UIEdgeInsets*)arg3;
-(void)tiltedTabView:(id)arg1 relinquishContentView:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
-(void)tiltedTabView:(id)arg1 relinquishSnapshotView:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
-(void)tiltedTabView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
-(BOOL)tiltedTabView:(id)arg1 canCloseItemAtIndex:(unsigned long long)arg2;
-(void)tiltedTabView:(id)arg1 closeItemAtIndex:(unsigned long long)arg2;
-(void)tiltedTabView:(id)arg1 didMoveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(double)tiltedTabView:(id)arg1 headerHeightForItemAtIndex:(unsigned long long)arg2;
-(CGRect*)tiltedTabView:(id)arg1 frameForItemAtIndex:(unsigned long long)arg2;
-(CATransform3D*)tiltedTabView:(id)arg1 layerTransformForItemAtIndex:(unsigned long long)arg2;
-(double)tiltedTabView:(id)arg1 alphaValueForItemAtIndex:(unsigned long long)arg2;

@end

