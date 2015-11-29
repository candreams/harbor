//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


/*#import "BBObserverDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "SBApplicationRestrictionObserver.h"
#import "SBFolderControllerDelegate.h"
#import "SBIconModelApplicationDataSource.h"
#import "SBIconModelDelegate.h"
#import "SBIconViewDelegate.h"
#import "SBIconViewMapDelegate.h"
#import "SBSearchGestureObserver.h"*/

@class BBObserver, NSIndexPath, NSMutableArray, NSMutableSet, NSSet, NSTimer, SBFolder, SBIcon, SBIconColorSettings, SBIconContentView, SBIconModel, SBLeafIcon, SBRootFolderController, UITouch, _UILegibilitySettings;

@interface SBIconController : NSObject /*<BBObserverDelegate, MCProfileConnectionObserver, SBApplicationRestrictionObserver, SBFolderControllerDelegate, SBSearchGestureObserver, SBIconViewDelegate, SBIconModelDelegate, SBIconViewMapDelegate, SBIconModelApplicationDataSource>*/
{
    NSSet *_visibleTags;
    NSSet *_hiddenTags;
    SBIconModel *_iconModel;
    SBIconContentView *_contentView;
    BOOL _needsRelayout;
    BOOL _sendITunesNotification;
    BBObserver *_bbObserver;
    NSMutableSet *_displayIDsWithBadgingDisabled;
    SBRootFolderController *_rootFolderController;
    SBFolder *_closingFolder;
    SBFolder *_folderToOpenWhenScrollingEnds;
    BOOL _rotating;
    NSInteger _orientation;
    SBIcon *_launchingIcon;
    SBIcon *_highlightedIcon;
    SBLeafIcon *_iconToReveal;
    SBIcon *_grabbedIcon;
    SBIcon *_recipientIcon;
    NSMutableArray *_droppedIconsAnimatingIntoPlace;
    NSMutableArray *_droppedIconsInToOrOutOfFolder;
    NSUInteger _numberOfDroppedIconsAnimatingIntoOrOutOfFolder;
    SBIcon *_lastTouchedIcon;
    BOOL _isEditing;
    BOOL _animatingFolder;
    BOOL _grabbedIconIsDraggedOutOfFolderView;
    SBFolder *_grabbedIconSourceFolder;
    BOOL _allowsUninstall;
    double _iconAlpha;
    double _oldScrollOffset;
    UITouch *_lastTouch;
    NSTimer *_folderSpringloadTimer;
    BOOL _keyboardIsRotating;
    BOOL _isAnimatingFolderCreation;
    BOOL _isAnimatingForUnscatter;
    BOOL _isAnimatingSignficantly;
    NSUInteger _maxIconViewsInHierarchy;
    NSUInteger _maxNewsstandItemViewsInHierarchy;
    SBIconColorSettings *_iconColorSettings;
    BOOL _showingSearch;
    _UILegibilitySettings *_legibilitySettings;
    NSIndexPath *_indexPathToResetTo;
}

+ (SBIconController*)sharedInstance;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (BOOL)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2;
- (BOOL)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3;
- (BOOL)folderController:(id)arg1 draggedIconDidPauseAtLocation:(struct CGPoint)arg2 inListView:(id)arg3;
- (Class)controllerClassForFolder:(id)arg1;
- (Class)_controllerClassForFolderClass:(Class)arg1;
- (id)_debugStringForIconOrder:(int)arg1;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)firstPageLeafIdentifiers;
- (BOOL)isNewsstandEnabled;
- (BOOL)isNewsstandSupported;
- (id)defaultIconState;
- (int)appVisibilityOverrideForBundleIdentifier:(id)arg1;
- (BOOL)updateAppIconVisibilityOverridesShowing:(id *)arg1 hiding:(id *)arg2;
- (id)allApplications;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)_updateDisabledBadgesSetWithSections:(id)arg1;
- (BOOL)_badgesAreDisabledForSectionInfo:(id)arg1;
- (BOOL)iconViewDisplaysCloseBox:(id)arg1;
- (BOOL)iconViewDisplaysBadges:(id)arg1;
- (BOOL)iconAllowsBadging:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
- (BOOL)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
- (void)iconTapped:(id)arg1;
- (BOOL)iconShouldAllowTap:(id)arg1;
- (void)icon:(id)arg1 touchMoved:(id)arg2;
- (void)iconTouchBegan:(id)arg1;
- (void)icon:(id)arg1 touchEnded:(BOOL)arg2;
- (void)iconHandleLongPress:(id)arg1;
- (int)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (NSUInteger)viewMap:(id)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
- (id)viewMapShouldPrepareViewsOfClasses:(id)arg1;
- (Class)iconViewClassForIcon:(id)arg1 location:(int)arg2;
- (id)windowForRecycledViewsInViewMap:(id)arg1;
- (NSUInteger)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (void)didDeleteIconState:(id)arg1;
- (void)didSaveIconState:(id)arg1;
- (BOOL)canSaveIconState:(id)arg1;
- (BOOL)canAddDownloadingIconForApplication:(id)arg1;
- (BOOL)canAddWebClip:(id)arg1;
- (BOOL)supportsDock;
- (NSUInteger)maxColCountForListInRootFolderWithInterfaceOrientation:(NSInteger)arg1;
- (NSUInteger)maxRowCountForListInRootFolderWithInterfaceOrientation:(NSInteger)arg1;
- (NSUInteger)maxIconCountForDock;
- (NSUInteger)maxIconCountForListInFolderClass:(Class)arg1;
- (NSUInteger)maxListCountForFolders;
- (void)noteIconStateChangedExternally;
- (BOOL)importIconState:(id)arg1;
- (void)_selectIconModel:(BOOL)arg1;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_iconModelDidLayout:(id)arg1;
- (void)_iconModelWillLayout:(id)arg1;
- (void)_iconModelDidReloadIcons:(id)arg1;
- (void)_iconModelWillReloadIcons:(id)arg1;
- (BOOL)relayout;
- (BOOL)dismissSpotlightIfNecessary;
- (void)_lockScreenUIWillLock:(id)arg1;
- (void)_noteUserIsInteractingWithIcons;
- (BOOL)isIconVisiblyRepresented:(id)arg1;
- (BOOL)_iconListIndexIsValid:(NSInteger)arg1;
- (void)layoutIconLists:(double)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3;
- (void)compactIconsInIconListsInFolder:(id)arg1 moveNow:(BOOL)arg2 limitToIconList:(id)arg3;
- (void)compactRootIconLists;
- (void)compactFolders:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)folderSpringloadTimerFired;
- (void)noteGrabbedIconLocationChangedWithTouch:(id)arg1;
- (void)_resetFolderSpringloadTimer;
- (void)_cancelFolderSpringloadTimer;
- (id)recipientIcon;
- (void)setLastTouchedIcon:(id)arg1;
- (id)lastTouchedIcon;
- (void)setRecipientIcon:(id)arg1 duration:(double)arg2;
- (id)grabbedIcon;
- (void)_iconDropDidFinish:(id)arg1;
- (void)setGrabbedIcon:(id)arg1;
- (void)_dropIcon:(id)arg1 withInsertionPath:(id)arg2;
- (void)fixupBouncedIconsInFolder:(id)arg1 startingWithIndex:(NSInteger)arg2;
- (void)setLastTouch:(id)arg1;
- (void)noteViewCovered;
- (void)restoreScrollingAndRotationAfterUngrab;
- (void)moveIconFromWindow:(id)arg1 toIconList:(id)arg2;
- (void)_moveIconToContentView:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (void)iconWasTapped:(id)arg1;
- (void)clearHighlightedIcon;
- (void)_launchIcon:(id)arg1;
- (void)removeAllIconAnimations;
- (BOOL)isAnimatingForUnscatter;
- (void)unscatterAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(/*CDUnknownBlockType*/void*)arg3;
- (void)scatterAnimated:(BOOL)arg1 withCompletion:(/*CDUnknownBlockType*/void*)arg2;
- (void)setIdleModeText:(id)arg1;
- (void)updateNumberOfRowsWithDuration:(double)arg1;
- (void)uninstallIcon:(id)arg1 animate:(BOOL)arg2;
- (void)uninstallIcon:(id)arg1;
- (BOOL)canUninstallIcon:(id)arg1;
- (BOOL)allowsUninstall;
- (void)uninstallIconAnimationCompletedForIcon:(id)arg1;
- (void)removeIcon:(id)arg1 compactFolder:(BOOL)arg2;
- (void)removeIcon:(id)arg1 andCompactFolder:(BOOL)arg2 folderRef:(id *)arg3;
- (id)insertIcon:(id)arg1 intoListView:(id)arg2 iconIndex:(NSInteger)arg3 moveNow:(BOOL)arg4;
- (id)insertIcon:(id)arg1 intoListView:(id)arg2 iconIndex:(NSInteger)arg3 moveNow:(BOOL)arg4 pop:(BOOL)arg5;
- (id)insertIcon:(id)arg1 atIndexPath:(id)arg2 moveNow:(BOOL)arg3;
- (id)insertIcon:(id)arg1 atIndexPath:(id)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4;
- (id)placeIcon:(id)arg1 atIndexPath:(id)arg2 moveNow:(BOOL)arg3 layoutNow:(BOOL)arg4 pop:(BOOL)arg5;
- (void)scrollToIconToRevealAnimated:(BOOL)arg1;
- (void)finishInstallingIconAnimated:(BOOL)arg1;
- (void)setIconToReveal:(id)arg1 revealingPrevious:(BOOL)arg2;
- (id)iconToReveal;
- (void)replaceIconAtPath:(id)arg1 withIcon:(id)arg2 saveState:(BOOL)arg3;
- (void)addNewIconToDesignatedLocation:(id)arg1 animate:(BOOL)arg2 scrollToList:(BOOL)arg3 saveIconState:(BOOL)arg4;
- (void)addNewIconsToDesignatedLocations:(id)arg1 saveIconState:(BOOL)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (NSInteger)orientation;
- (void)handleHomeButtonTap;
- (BOOL)scrollToIconListAtIndex:(NSInteger)arg1 animate:(BOOL)arg2;
- (void)scrollToIconListContainingIcon:(id)arg1 animate:(BOOL)arg2;
- (BOOL)_shouldLockItemsInStoreDemoMode;
- (BOOL)_iconCanBeGrabbed:(id)arg1;
- (id)currentFolderIconList;
- (id)dockListView;
- (id)currentRootIconList;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (void)updateCurrentIconListIndexAndVisibility:(BOOL)arg1;
- (void)updateCurrentIconListIndexAndVisibility;
- (BOOL)isFolderScrolling;
- (BOOL)isScrolling;
- (void)_revealMenuForIconView:(id)arg1 presentImmediately:(BOOL)arg2;
- (void)showCarrierDebuggingAlertIfNeeded;
- (void)showInfoAlertIfNeeded:(BOOL)arg1;
- (void)showSpotlightAlertIfNecessary;
- (void)_iconVisibilityChanged:(id)arg1;
- (void)_resetRootIconLists;
- (void)_prepareToResetRootIconLists;
- (id)folderIconListAtIndex:(NSUInteger)arg1;
- (id)rootIconListAtIndex:(NSInteger)arg1;
- (NSInteger)currentFolderIconListIndex;
- (NSInteger)currentIconListIndex;
- (id)_currentFolderController;
- (id)_openFolderController;
- (id)_rootFolderController;
- (id)rootFolder;
- (id)contentView;
- (void)dealloc;
- (SBIconModel*)model;
- (id)init;

@end
