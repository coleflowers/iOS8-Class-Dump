/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Podcasts/MTLibraryViewControllerProtocol.h>
#import <Podcasts/NSFetchedResultsControllerDelegate.h>

@class MTLibrary, NSString, NSPredicate, NSArray, NSFetchedResultsController;

@interface MTFetchedTableViewController : UITableViewController <MTLibraryViewControllerProtocol, NSFetchedResultsControllerDelegate> {

	long long _userDrivenCounter;
	BOOL _inSwipeToDeleteMode;
	MTLibrary* _library;
	NSString* _fetchEntityName;
	NSPredicate* _fetchPredicate;
	NSArray* _sortDescriptors;
	NSString* _sectionName;
	long long _rowAnimation;
	NSFetchedResultsController* _frc;
	NSString* _sectionNameKeyPath;

}

@property (nonatomic,retain) NSFetchedResultsController * frc;              //@synthesize frc=_frc - In the implementation block
@property (nonatomic,retain) NSString * fetchEntityName;                    //@synthesize fetchEntityName=_fetchEntityName - In the implementation block
@property (nonatomic,retain) NSString * sectionName;                        //@synthesize sectionName=_sectionName - In the implementation block
@property (nonatomic,retain) NSPredicate * fetchPredicate;                  //@synthesize fetchPredicate=_fetchPredicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                     //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL changeIsUserDriven; 
@property (assign,nonatomic) long long rowAnimation;                        //@synthesize rowAnimation=_rowAnimation - In the implementation block
@property (assign,nonatomic) BOOL inSwipeToDeleteMode;                      //@synthesize inSwipeToDeleteMode=_inSwipeToDeleteMode - In the implementation block
@property (nonatomic,retain) NSString * sectionNameKeyPath;                 //@synthesize sectionNameKeyPath=_sectionNameKeyPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MTLibrary * library;                           //@synthesize library=_library - In the implementation block
-(NSFetchedResultsController *)frc;
-(BOOL)changeIsUserDriven;
-(void)setChangeIsUserDriven:(BOOL)arg1 ;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)inSwipeToDeleteMode;
-(void)setInSwipeToDeleteMode:(BOOL)arg1 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)fetchRequestInManagedObjectContext:(id)arg1 ;
-(void)setFrc:(NSFetchedResultsController *)arg1 ;
-(void)initializeFrc;
-(void)_updateTableAnimated:(BOOL)arg1 ;
-(void)setFetchPredicate:(NSPredicate *)arg1 ;
-(NSString *)fetchEntityName;
-(NSPredicate *)fetchPredicate;
-(BOOL)hasSectionNameKeyPathChanged;
-(long long)rowAnimation;
-(void)refetchWithSortDescriptors:(id)arg1 animated:(BOOL)arg2 ;
-(void)refetchWithPredicate:(id)arg1 ;
-(void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(BOOL)arg3 ;
-(void)reloadVisibleCellsWithAnimation:(long long)arg1 ;
-(void)setFetchEntityName:(NSString *)arg1 ;
-(NSString *)sectionName;
-(void)setSectionName:(NSString *)arg1 ;
-(void)setRowAnimation:(long long)arg1 ;
-(void)setSectionNameKeyPath:(NSString *)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(NSString *)sectionNameKeyPath;
-(void)dealloc;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(unsigned long long)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setRefreshControl:(id)arg1 ;
-(MTLibrary *)library;
-(void)setLibrary:(MTLibrary *)arg1 ;
-(id)initWithEntityName:(id)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
@end

