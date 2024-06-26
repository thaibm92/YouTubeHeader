#import "MLAVAssetPlayer.h"
#import "MLInnerTubePlayerConfig.h"
#import "MLPlayerViewProtocol.h"
#import "MLPlayerStickySettings.h"
#import "MLStreamSelectorDelegate.h"
#import "MLVideoFormatConstraint.h"

@interface MLAVPlayer : NSObject <MLStreamSelectorDelegate>
@property (nonatomic, readwrite, assign) BOOL active;
@property (nonatomic, readonly, assign) BOOL externalPlaybackActive;
@property (nonatomic, readwrite, assign) float rate;
@property (nonatomic, strong, readwrite) id <MLVideoFormatConstraint> videoFormatConstraint;
@property (nonatomic, readonly, strong) MLVideo *video;
@property (nonatomic, readonly, strong) MLInnerTubePlayerConfig *config;
@property (nonatomic, readonly, strong) MLAVAssetPlayer *assetPlayer;
@property (nonatomic, readwrite, strong) UIView <MLPlayerViewProtocol> *renderingView;
- (instancetype)initWithVideo:(MLVideo *)video playerConfig:(MLInnerTubePlayerConfig *)playerConfig stickySettings:(MLPlayerStickySettings *)stickySettings externalPlaybackActive:(BOOL)externalPlaybackActive;
@end