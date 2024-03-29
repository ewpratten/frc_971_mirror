licenses(["notice"])  # lgpl

cc_library(
    name = "ct",
    hdrs = [
        "ct_optcon/include/ct/optcon/optcon.h",
        "ct_core/include/ct/core/core.h",
        "ct_core/include/ct/core/internal/autodiff/CppadParallel.h",
        "ct_core/include/ct/core/Common",
        "ct_core/include/ct/core/Common-impl",
        "ct_core/include/ct/core/common/GaussianNoise.h",
        "ct_core/include/ct/core/common/QuantizationNoise.h",
        "ct_core/include/ct/core/common/InfoFileParser.h",
        "ct_core/include/ct/core/common/Timer.h",
        "ct_core/include/ct/core/common/ExternallyDrivenTimer.h",
        "ct_core/include/ct/core/common/Interpolation.h",
        "ct_core/include/ct/core/types/arrays/DiscreteArray.h",
        "ct_core/include/ct/core/types/arrays/TimeArray.h",
        "ct_core/include/ct/core/types/Time.h",
        "ct_core/include/ct/core/common/linspace.h",
        "ct_core/include/ct/core/types/arrays/ScalarArray.h",
        "ct_core/include/ct/core/common/activations/Activations.h",
        "ct_core/include/ct/core/common/activations/ActivationBase.hpp",
        "ct_core/include/ct/core/common/activations/PeriodicActivation.hpp",
        "ct_core/include/ct/core/internal/traits/TraitSelectorSpecs.h",
        "ct_core/include/ct/core/internal/traits/CppADCodegenTrait.h",
        "ct_core/include/ct/core/internal/traits/CppADDoubleTrait.h",
        "ct_core/include/ct/core/internal/traits/TraitSelector.h",
        "ct_core/include/ct/core/internal/traits/FloatTrait.h",
        "ct_core/include/ct/core/internal/traits/DoubleTrait.h",
        "ct_core/include/ct/core/common/activations/RBFGaussActivation.h",
        "ct_core/include/ct/core/common/activations/SingleActivation.hpp",
        "ct_core/include/ct/core/common/activations/BarrierActivation.hpp",
        "ct_core/include/ct/core/common/activations/utilities/ActivationLoadMacros.h",
        "ct_core/include/ct/core/Types",
        "ct_core/include/ct/core/Types-impl",
        "ct_core/include/ct/core/types/AutoDiff.h",
        "ct_core/include/ct/core/types/ControlVector.h",
        "ct_core/include/ct/core/types/StateVector.h",
        "ct_core/include/ct/core/types/FeedbackMatrix.h",
        "ct_core/include/ct/core/types/StateMatrix.h",
        "ct_core/include/ct/core/types/ControlMatrix.h",
        "ct_core/include/ct/core/types/StateControlMatrix.h",
        "ct_core/include/ct/core/types/arrays/MatrixArrays.h",
        "ct_core/include/ct/core/types/trajectories/DiscreteTrajectoryBase.h",
        "ct_core/include/ct/core/types/trajectories/TrajectoryBase.h",
        "ct_core/include/ct/core/types/trajectories/ScalarTrajectory.h",
        "ct_core/include/ct/core/types/trajectories/MatrixTrajectories.h",
        "ct_core/include/ct/core/Control",
        "ct_core/include/ct/core/Control-impl",
        "ct_core/include/ct/core/control/continuous_time/Controller.h",
        "ct_core/include/ct/core/control/continuous_time/StateFeedbackController.h",
        "ct_core/include/ct/core/control/continuous_time/ConstantController.h",
        "ct_core/include/ct/core/control/continuous_time/ConstantStateFeedbackController.h",
        "ct_core/include/ct/core/control/continuous_time/ConstantTrajectoryController.h",
        "ct_core/include/ct/core/control/continuous_time/siso/PIDController.h",
        "ct_core/include/ct/core/control/continuous_time/siso/PIDController-impl.h",
        "ct_core/include/ct/core/control/continuous_time/siso/StepInputController.h",
        "ct_core/include/ct/core/control/continuous_time/mimo/LinearFunctions.h",
        "ct_core/include/ct/core/control/discrete_time/DiscreteController.h",
        "ct_core/include/ct/core/Systems",
        "ct_core/include/ct/core/Systems-impl",
        "ct_core/include/ct/core/systems/continuous_time/System.h",
        "ct_core/include/ct/core/systems/continuous_time/ControlledSystem.h",
        "ct_core/include/ct/core/systems/continuous_time/SecondOrderSystem.h",
        "ct_core/include/ct/core/systems/continuous_time/linear/LinearSystem.h",
        "ct_core/include/ct/core/systems/continuous_time/linear/LTISystem.h",
        "ct_core/include/ct/core/systems/linearizer/DynamicsLinearizerNumDiff.h",
        "ct_core/include/ct/core/systems/linearizer/DynamicsLinearizerAD.h",
        "ct_core/include/ct/core/systems/linearizer/DynamicsLinearizerADBase.h",
        "ct_core/include/ct/core/internal/autodiff/SparsityPattern.h",
        "ct_core/include/ct/core/systems/linearizer/DynamicsLinearizerADCG.h",
        "ct_core/include/ct/core/internal/autodiff/CGHelpers.h",
        "ct_core/include/ct/core/systems/continuous_time/linear/SystemLinearizer.h",
        "ct_core/include/ct/core/systems/continuous_time/linear/AutoDiffLinearizer.h",
        "ct_core/include/ct/core/systems/continuous_time/linear/ADCodegenLinearizer.h",
        "ct_core/include/ct/core/templateDir.h",  # TODO(austin): Looks like this could be non-hermetic.
        "ct_core/include/ct/core/systems/discrete_time/DiscreteControlledSystem.h",
        "ct_core/include/ct/core/systems/discrete_time/DiscreteSystem.h",
        "ct_core/include/ct/core/systems/discrete_time/SystemDiscretizer.h",
        "ct_core/include/ct/core/integration/Integrator.h",
        "ct_core/include/ct/core/integration/EventHandler.h",
        "ct_core/include/ct/core/integration/Observer.h",
        "ct_core/include/ct/core/integration/eigenIntegration.h",
        "ct_core/include/ct/core/integration/internal/StepperBase.h",
        "ct_core/include/ct/core/integration/internal/SteppersODEInt.h",
        "ct_core/include/ct/core/integration/internal/SteppersODEIntDefinitions.h",
        "ct_core/include/ct/core/integration/internal/SteppersCT.h",
        "ct_core/include/ct/core/integration/IntegratorSymplectic.h",
        "ct_core/include/ct/core/systems/continuous_time/SymplecticSystem.h",
        "ct_core/include/ct/core/integration/EventHandlers/SubstepRecorder.h",
        "ct_core/include/ct/core/systems/discrete_time/linear/DiscreteLinearSystem.h",
        "ct_core/include/ct/core/systems/discrete_time/linear/DiscreteSystemLinearizer.h",
        "ct_core/include/ct/core/systems/discrete_time/linear/DiscreteSystemLinearizerAD.h",
        "ct_core/include/ct/core/systems/discrete_time/linear/DiscreteSystemLinearizerADCG.h",
        "ct_core/include/ct/core/Integration",
        "ct_core/include/ct/core/Integration-impl",
        "ct_core/include/ct/core/integration/EventHandlers/KillIntegrationEventHandler.h",
        "ct_core/include/ct/core/integration/EventHandlers/MaxStepsEventHandler.h",
        "ct_core/include/ct/core/integration/sensitivity/Sensitivity.h",
        "ct_core/include/ct/core/integration/sensitivity/SensitivityApproximation.h",
        "ct_core/include/ct/core/integration/sensitivity/SensitivityIntegrator.h",
        "ct_core/include/ct/core/Geometry",
        "ct_core/include/ct/core/Geometry-impl",
        "ct_core/include/ct/core/geometry/Ellipsoid.h",
        "ct_core/include/ct/core/geometry/Plane.h",
        "ct_core/include/ct/core/geometry/PlaneEstimator.h",
        "ct_core/include/ct/core/Internal",
        "ct_core/include/ct/core/Internal-impl",
        "ct_core/include/ct/core/internal/autodiff/ADHelpers.h",
        "ct_core/include/ct/core/Math",
        "ct_core/include/ct/core/Math-impl",
        "ct_core/include/ct/core/math/Derivatives.h",
        "ct_core/include/ct/core/math/DerivativesCppadSettings.h",
        "ct_core/include/ct/core/math/DerivativesNumDiff.h",
        "ct_core/include/ct/core/math/DerivativesCppad.h",
        "ct_core/include/ct/core/math/DerivativesCppadJIT.h",
        "ct_core/include/ct/core/math/DerivativesCppadCG.h",
        "ct_core/include/ct/core/Simulation",
        "ct_core/include/ct/core/Simulation-impl",
        "ct_core/include/ct/core/simulation/ControlSimulator.h",
        "ct_core/include/ct/core/control/continuous_time/StateFeedbackController-impl.h",
        "ct_core/include/ct/core/control/continuous_time/ConstantController-impl.h",
        "ct_core/include/ct/core/systems/discrete_time/SystemDiscretizer-impl.h",
        "ct_core/include/ct/core/integration/Observer-impl.h",
        "ct_core/include/ct/core/integration/Integrator-impl.h",
        "ct_core/include/ct/core/integration/IntegratorSymplectic-impl.h",
        "ct_optcon/include/ct/optcon/costfunction/costfunction.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermBase.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermLinear.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermMixed.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermQuadratic.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermQuadMult.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermQuadTracking.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermStateBarrier.hpp",
        "ct_optcon/include/ct/optcon/costfunction/CostFunction.hpp",
        "ct_optcon/include/ct/optcon/costfunction/CostFunctionQuadratic.hpp",
        "ct_optcon/include/ct/optcon/costfunction/CostFunctionQuadratic-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/CostFunctionAD.hpp",
        "ct_optcon/include/ct/optcon/costfunction/CostFunctionAD-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/utility/utilities.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermLoadMacros.hpp",
        "ct_optcon/include/ct/optcon/costfunction/CostFunctionAnalytical.hpp",
        "ct_optcon/include/ct/optcon/costfunction/CostFunctionQuadraticSimple.hpp",
        "ct_optcon/include/ct/optcon/costfunction/CostFunctionQuadraticSimple-impl.hpp",
        "ct_optcon/include/ct/optcon/constraint/constraint.h",
        "ct_optcon/include/ct/optcon/constraint/term/ConstraintBase.h",
        "ct_optcon/include/ct/optcon/constraint/term/BoxConstraintBase.h",
        "ct_optcon/include/ct/optcon/constraint/term/BoxConstraintBase-impl.h",
        "ct_optcon/include/ct/optcon/constraint/term/ControlInputConstraint.h",
        "ct_optcon/include/ct/optcon/constraint/term/ControlInputConstraint-impl.h",
        "ct_optcon/include/ct/optcon/constraint/term/ObstacleConstraint.h",
        "ct_optcon/include/ct/optcon/constraint/term/ObstacleConstraint-impl.h",
        "ct_optcon/include/ct/optcon/constraint/term/StateConstraint.h",
        "ct_optcon/include/ct/optcon/constraint/term/StateConstraint-impl.h",
        "ct_optcon/include/ct/optcon/constraint/term/TerminalConstraint.h",
        "ct_optcon/include/ct/optcon/constraint/term/TerminalConstraint-impl.h",
        "ct_optcon/include/ct/optcon/constraint/ConstraintContainerBase.h",
        "ct_optcon/include/ct/optcon/constraint/ConstraintContainerBase-impl.h",
        "ct_optcon/include/ct/optcon/constraint/LinearConstraintContainer.h",
        "ct_optcon/include/ct/optcon/constraint/LinearConstraintContainer-impl.h",
        "ct_optcon/include/ct/optcon/constraint/ConstraintContainerAD.h",
        "ct_optcon/include/ct/optcon/constraint/ConstraintContainerAD-impl.h",
        "ct_optcon/include/ct/optcon/constraint/ConstraintContainerAnalytical.h",
        "ct_optcon/include/ct/optcon/constraint/ConstraintContainerAnalytical-impl.h",
        "ct_optcon/include/ct/optcon/problem/OptConProblem.h",
        "ct_optcon/include/ct/optcon/problem/OptConProblem-impl.h",
        "ct_optcon/include/ct/optcon/problem/LQOCProblem.hpp",
        "ct_optcon/include/ct/optcon/solver/OptConSolver.h",
        "ct_optcon/include/ct/optcon/nloc/NLOCBackendBase.hpp",
        "ct_optcon/include/ct/optcon/solver/lqp/GNRiccatiSolver.hpp",
        "ct_optcon/include/ct/optcon/solver/lqp/LQOCSolver.hpp",
        "ct_optcon/include/ct/optcon/solver/NLOptConSettings.hpp",
        "ct_optcon/include/ct/optcon/solver/lqp/HPIPMInterface.hpp",
        "ct_optcon/include/ct/optcon/nloc/NLOCResults.hpp",
        "ct_optcon/include/ct/optcon/nloc/NLOCBackendST.hpp",
        "ct_optcon/include/ct/optcon/nloc/NLOCBackendMP.hpp",
        "ct_optcon/include/ct/optcon/nloc/algorithms/gnms/GNMS.hpp",
        "ct_optcon/include/ct/optcon/nloc/NLOCAlgorithm.hpp",
        "ct_optcon/include/ct/optcon/nloc/algorithms/ilqr/iLQR.hpp",
        "ct_optcon/include/ct/optcon/solver/NLOptConSolver.hpp",
        "ct_optcon/include/ct/optcon/lqr/riccati/CARE.hpp",
        "ct_optcon/include/ct/optcon/lqr/riccati/DARE.hpp",
        "ct_optcon/include/ct/optcon/lqr/riccati/DynamicRiccatiEquation.hpp",
        "ct_optcon/include/ct/optcon/lqr/FHDTLQR.hpp",
        "ct_optcon/include/ct/optcon/lqr/LQR.hpp",
        "ct_optcon/include/ct/optcon/dms/dms.h",
        "ct_optcon/include/ct/optcon/dms/Constraints",
        "ct_optcon/include/ct/optcon/dms/constraints/ConstraintDiscretizer.h",
        "ct_optcon/include/ct/optcon/nlp/DiscreteConstraintBase.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/OptVectorDms.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/TimeGrid.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/DmsDimensions.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/spline/SplinerBase.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/spline/ZeroOrderHold/ZeroOrderHoldSpliner.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/spline/Linear/LinearSpliner.h",
        "ct_optcon/include/ct/optcon/nlp/OptVector.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/DmsSettings.h",
        "ct_optcon/include/ct/optcon/nlp/solver/NlpSolverSettings.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/implementation/OptVectorDms-impl.h",
        "ct_optcon/include/ct/optcon/dms/constraints/ConstraintsContainerDms.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/ShotContainer.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/SensitivityIntegratorCT.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/ControllerDms.h",
        "ct_optcon/include/ct/optcon/nlp/DiscreteConstraintContainerBase.h",
        "ct_optcon/include/ct/optcon/dms/constraints/InitStateConstraint.h",
        "ct_optcon/include/ct/optcon/dms/constraints/ContinuityConstraint.h",
        "ct_optcon/include/ct/optcon/dms/constraints/TimeHorizonEqualityConstraint.h",
        "ct_optcon/include/ct/optcon/dms/constraints/implementation/ConstraintsContainerDms-impl.h",
        "ct_optcon/include/ct/optcon/dms/Dms",
        "ct_optcon/include/ct/optcon/dms/dms_core/DmsSolver.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/DmsProblem.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/cost_evaluator/CostEvaluatorSimple.h",
        "ct_optcon/include/ct/optcon/nlp/DiscreteCostEvaluatorBase.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/cost_evaluator/CostEvaluatorFull.h",
        "ct_optcon/include/ct/optcon/nlp/Nlp.h",
        "ct_optcon/include/ct/optcon/nlp/Nlp",
        "ct_optcon/include/ct/optcon/nlp/solver/NlpSolver.h",
        "ct_optcon/include/ct/optcon/nlp/solver/IpoptSolver.h",
        "ct_optcon/include/ct/optcon/nlp/solver/SnoptSolver.h",
        "ct_optcon/include/ct/optcon/dms/dms_core/RKnDerivatives.h",
        "ct_optcon/include/ct/optcon/mpc/MpcSettings.h",
        "ct_optcon/include/ct/optcon/mpc/MPC.h",
        "ct_optcon/include/ct/optcon/mpc/MpcTimeKeeper.h",
        "ct_optcon/include/ct/optcon/mpc/timehorizon/MpcTimeHorizon.h",
        "ct_optcon/include/ct/optcon/mpc/policyhandler/PolicyHandler.h",
        "ct_optcon/include/ct/optcon/mpc/policyhandler/default/StateFeedbackPolicyHandler.h",
        "ct_optcon/include/ct/optcon/costfunction/costfunction-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermBase-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermLinear-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermMixed-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermQuadratic-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermQuadMult-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermQuadTracking-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/term/TermStateBarrier-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/CostFunction-impl.hpp",
        "ct_optcon/include/ct/optcon/costfunction/CostFunctionAnalytical-impl.hpp",
        "ct_optcon/include/ct/optcon/constraint/constraint-impl.h",
        "ct_optcon/include/ct/optcon/constraint/term/ConstraintBase-impl.h",
        "ct_optcon/include/ct/optcon/problem/LQOCProblem-impl.hpp",
        "ct_optcon/include/ct/optcon/solver/lqp/GNRiccatiSolver-impl.hpp",
        "ct_optcon/include/ct/optcon/solver/lqp/HPIPMInterface-impl.hpp",
        "ct_optcon/include/ct/optcon/solver/NLOptConSolver-impl.hpp",
        "ct_optcon/include/ct/optcon/lqr/riccati/CARE-impl.hpp",
        "ct_optcon/include/ct/optcon/lqr/riccati/DARE-impl.hpp",
        "ct_optcon/include/ct/optcon/lqr/FHDTLQR-impl.hpp",
        "ct_optcon/include/ct/optcon/lqr/LQR-impl.hpp",
        "ct_optcon/include/ct/optcon/nloc/NLOCBackendBase-impl.hpp",
        "ct_optcon/include/ct/optcon/nloc/NLOCBackendST-impl.hpp",
        "ct_optcon/include/ct/optcon/nloc/NLOCBackendMP-impl.hpp",
        "ct_optcon/include/ct/optcon/nloc/algorithms/gnms/GNMS-impl.hpp",
        "ct_optcon/include/ct/optcon/nloc/algorithms/ilqr/iLQR-impl.hpp",
        "ct_optcon/include/ct/optcon/mpc/MPC-impl.h",
        "ct_optcon/include/ct/optcon/mpc/timehorizon/MpcTimeHorizon-impl.h",
        "ct_optcon/include/ct/optcon/mpc/policyhandler/PolicyHandler-impl.h",
        "ct_optcon/include/ct/optcon/mpc/policyhandler/default/StateFeedbackPolicyHandler-impl.h",
    ] + glob(["ct_core/include/external/cppad/**/*.hpp"]),
    copts = [
        "-Wno-pointer-arith",
        "-Wno-unused-variable",
        "-Wno-unused-parameter",
    ],
    defines = [
        "HPIPM=1",
    ],
    includes = [
        "ct_core/include",
        "ct_core/include/external",
        "ct_optcon/include",
    ],
    restricted_to = ["//tools:k8"],
    visibility = ["//visibility:public"],
    deps = [
        "//third_party/boostorg/algorithm",
        "//third_party/boostorg/config",
        "//third_party/boostorg/odeint",
        "//third_party/boostorg/property_tree",
        "//third_party/hpipm",
        "@org_tuxfamily_eigen//:eigen",
    ],
)
