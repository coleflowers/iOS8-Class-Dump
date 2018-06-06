/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>
#import <UIKit/UIActivityItemSocialSource.h>

@class MTShareUtilDataSource, NSString;

@interface MTCopyLinkActivityItemProvider : UIActivityItemProvider <UIActivityItemSocialSource> {

	MTShareUtilDataSource* _dataSource;

}

@property (nonatomic,retain) MTShareUtilDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(MTShareUtilDataSource *)arg1 ;
-(MTShareUtilDataSource *)dataSource;
-(id)item;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
@end
