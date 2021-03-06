/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UISnapshotView.h>

@class UIImageView, UIImage;

@interface _MFActorSnapshotView : UISnapshotView {

	UIImageView* _serializedImageView;
	UIEdgeInsets _snapshotInsets;

}

@property (nonatomic,retain) UIImage * serializedImage; 
@property (nonatomic,readonly) UIImageView * serializedImageView;              //@synthesize serializedImageView=_serializedImageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets snapshotInsets;                      //@synthesize snapshotInsets=_snapshotInsets - In the implementation block
-(UIImage *)serializedImage;
-(void)setSerializedImage:(UIImage *)arg1 ;
-(UIImageView *)serializedImageView;
-(UIEdgeInsets)snapshotInsets;
-(void)setSnapshotInsets:(UIEdgeInsets)arg1 ;
-(void)dealloc;
-(void)captureSnapshotOfView:(id)arg1 withSnapshotType:(int)arg2 ;
@end

