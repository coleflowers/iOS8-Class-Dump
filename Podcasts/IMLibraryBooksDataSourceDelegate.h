/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMLibraryBooksDataSourceDelegate <NSObject>
@optional
-(void)dataSourceWillChangeContent:(id)arg1;
-(void)dataSource:(id)arg1 didChangeSectionAtIndex:(unsigned long long)arg2 forChangeType:(int)arg3;
-(void)dataSource:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(int)arg4 newIndexPath:(id)arg5;
-(void)dataSourceDidChangeContent:(id)arg1;
-(void)dataSource:(id)arg1 didReturnImage:(id)arg2 context:(id)arg3;

@required
-(id)sectionNameKeyPathForDataSource:(id)arg1;
-(id)sortDescriptorsForDataSource:(id)arg1;
-(id)predicateForDataSource:(id)arg1;

@end
