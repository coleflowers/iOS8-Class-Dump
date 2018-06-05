/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIImageView, MKMapSnapshotter, MKMapSnapshotOptions;

@interface RAPMapFeatureTableViewCell : UITableViewCell {

	UIActivityIndicatorView* _spinner;
	UIImageView* _snapshotImageView;
	CGSize _lastImageSizeUsed;
	double _lastScaleUsed;
	BOOL _snapshotImageOptionsChanged;
	MKMapSnapshotter* _runningSnapshotter;
	BOOL _showsPin;
	MKMapSnapshotOptions* _snapshotOptionsTemplate;

}

@property (nonatomic,copy) MKMapSnapshotOptions * snapshotOptionsTemplate;              //@synthesize snapshotOptionsTemplate=_snapshotOptionsTemplate - In the implementation block
@property (assign,nonatomic) BOOL showsPin;                                             //@synthesize showsPin=_showsPin - In the implementation block
+(double)defaultHeight;
-(void)setSnapshotOptionsTemplate:(MKMapSnapshotOptions *)arg1 ;
-(BOOL)_needsUpdateForNewOptions:(id)arg1 ;
-(void)_updateSnapshotIfNeeded;
-(void)_updateSnapshotNowIfNeeded;
-(MKMapSnapshotOptions *)snapshotOptionsTemplate;
-(BOOL)showsPin;
-(void)setShowsPin:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

