/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, TIKeyboardCandidateResultSet, UIKeyboardCandidateSortControl, UIKeyboardCandidateGridCollectionViewController;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate> {
    UIView *_clippingView;
    UIView *_topBorder;
    unsigned int _selectedSortIndex;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    UIKeyboardCandidateSortControl *_scrollViewSortControl;
}

@property(readonly) TIKeyboardCandidateResultSet * candidateResultSet;
@property unsigned int selectedSortIndex;
@property(retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;
@property(retain) UIKeyboardCandidateSortControl * scrollViewSortControl;


- (void)addSubview:(id)arg1;
- (id)keyboardBehaviors;
- (id)candidateResultSet;
- (BOOL)hasCandidates;
- (id)currentCandidate;
- (void)displayLayer:(id)arg1;
- (void)dealloc;
- (id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned int)arg2;
- (void)setScrollViewSortControl:(id)arg1;
- (void)sortSelectionBarAction:(id)arg1;
- (void)setSelectedSortIndex:(unsigned int)arg1;
- (void)setCollectionViewController:(id)arg1;
- (unsigned int)selectedSortIndex;
- (void)updateCollectionViewController:(BOOL)arg1;
- (id)collectionViewController;
- (id)scrollViewSortControl;
- (void)clearCollectionViewController;
- (void)updateCollectionViewController;
- (BOOL)isTenKey;
- (void)setRenderConfig:(id)arg1;
- (id)headerViewForCandidateSet:(id)arg1;
- (unsigned int)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned int)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (id)candidateList;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)isExtendedList;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;

@end