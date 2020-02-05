#import "RNNBasePresenter.h"
#import "RNNRootViewCreator.h"
#import "RNNReactComponentManager.h"

@interface RNNNavigationControllerPresenter : RNNBasePresenter

- (instancetype)initWithComponentManager:(RNNReactComponentManager *)componentManager;

- (void)applyOptionsBeforePopping:(RNNNavigationOptions *)options;

- (void)renderComponents:(RNNNavigationOptions *)options perform:(RNNReactViewReadyCompletionBlock)readyBlock;

@end
